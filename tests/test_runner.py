"""Ensure broken programs cannot silently pass the fixture runner."""
import sys
import unittest
from run_tests import run_case


class RunnerTests(unittest.TestCase):
    def run_python(self, code, expected=b"ok\n", status=0, timeout=5):
        return run_case([sys.executable, "-c", code], b"", expected, status, timeout)

    def test_success(self):
        self.assertIsNone(self.run_python("print('ok')"))

    def test_expected_failure(self):
        self.assertIsNone(self.run_python("print('ok'); exit(1)", status=1))

    def test_wrong_exit_status(self):
        self.assertIn("exit status", self.run_python("print('ok'); exit(1)"))

    def test_stderr(self):
        self.assertIn("stderr", self.run_python("import sys; print('bad', file=sys.stderr); print('ok')"))

    def test_output_mismatch(self):
        self.assertIn("expected", self.run_python("print('wrong')"))

    def test_missing_newline(self):
        self.assertIn("expected", self.run_python("print('ok', end='')"))

    def test_timeout(self):
        self.assertIn("timeout", self.run_python("import time; time.sleep(10)", timeout=0.2))

    def test_missing_executable(self):
        self.assertIsNotNone(run_case(["./nonexistent-lab-test-executable"], b"", b""))


if __name__ == "__main__":
    unittest.main()
