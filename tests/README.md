# Regression tests

Run `make test` after installing Python 3.9+, GNU Make and GCC/Clang. To use an
existing build, run `python3 tests/run_tests.py build`; Windows expects `.exe`
files at the same relative paths. `sh tests/run_tests.sh build` is a compatibility
entry point.

## Fixture format

For `lab03-conditions/01_even_or_odd.c`, a case named `int_min` uses:

- `cases/lab03-conditions/01_even_or_odd.int_min.in`: stdin bytes
- `cases/lab03-conditions/01_even_or_odd.int_min.expected`: expected stdout
- `cases/lab03-conditions/01_even_or_odd.int_min.status`: optional exit status;
  omit for success (0), use `1` for rejected input

Do not trim whitespace from expected output: prompts can end in a space without
a newline. Only CRLF is normalized to LF. Stderr must be empty. Every invocation
has a five-second timeout, and missing files or executables fail the run.

Cases cover ordinary examples, existing arithmetic regressions, EOF, integer
bounds, oversized tokens, malformed numeric suffixes, non-finite radii and the
star-pattern row limit. Every input-reading program has invalid-input cases.
These are regression tests, not a claim of exhaustive branch coverage.

The runner itself is tested with subprocesses that return the wrong exit status,
write to stderr, produce incorrect output or time out:

```sh
python3 -m unittest discover -s tests -p 'test_*.py'
```
