#!/bin/sh
# Compatibility entry point for the portable fixture runner.
exec python3 "$(dirname "$0")/run_tests.py" "$@"
