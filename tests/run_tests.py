"""Run fixtures, checking output, exit status, stderr and time limits."""
import argparse
from pathlib import Path
import subprocess
import sys


def run_case(command, input_data, expected, expected_status=0, timeout=5):
    try:
        result = subprocess.run(command, input=input_data, capture_output=True,
                                timeout=timeout, check=False)
    except subprocess.TimeoutExpired:
        return f"exceeded {timeout:g}s timeout"
    except OSError as error:
        return str(error)
    if result.returncode != expected_status:
        return f"exit status {result.returncode}, expected {expected_status}; stderr={result.stderr!r}"
    if result.stderr:
        return f"unexpected stderr: {result.stderr!r}"
    # Only normalize Windows newlines; preserve other whitespace.
    actual = result.stdout.replace(b"\r\n", b"\n")
    expected = expected.replace(b"\r\n", b"\n")
    if actual != expected:
        return f"expected {expected!r}, got {actual!r}"
    return None


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("build_dir", nargs="?", type=Path, default=Path("build"))
    args = parser.parse_args()
    cases_dir = Path(__file__).resolve().parent / "cases"
    inputs = sorted(cases_dir.glob("*/*.in"))
    if not inputs:
        print("No test cases found", file=sys.stderr)
        return 1
    failed = 0
    for input_file in inputs:
        program = input_file.stem.rsplit(".", 1)[0]
        binary = args.build_dir.resolve() / input_file.parent.name / program
        if sys.platform == "win32":
            binary = binary.with_suffix(".exe")
        try:
            status_file = input_file.with_suffix(".status")
            status = int(status_file.read_text()) if status_file.exists() else 0
            error = run_case([str(binary)], input_file.read_bytes(),
                             input_file.with_suffix(".expected").read_bytes(), status)
        except (OSError, ValueError) as exception:
            error = f"invalid fixture: {exception}"
        if error:
            failed += 1
            print(f"FAIL {input_file.relative_to(cases_dir)}: {error}")
    print(f"{len(inputs) - failed} passed, {failed} failed")
    return int(failed != 0)


if __name__ == "__main__":
    sys.exit(main())
