#!/bin/sh
# Runs every test case in tests/cases/.
#
# A case is a pair of files:
#   tests/cases/<lab-folder>/<program>.<case>.in        input piped to the program
#   tests/cases/<lab-folder>/<program>.<case>.expected  exact expected output
#
# Programs that read no input use an empty .in file.
# Usage: sh tests/run_tests.sh [build-dir]

BUILD_DIR=${1:-build}
CASES_DIR=$(dirname "$0")/cases
pass=0
fail=0

for input in "$CASES_DIR"/*/*.in; do
    expected=${input%.in}.expected
    lab=$(basename "$(dirname "$input")")
    name=$(basename "$input" .in)    # e.g. 02_count_digits.zero
    program=${name%.*}               # e.g. 02_count_digits
    binary=$BUILD_DIR/$lab/$program

    if [ ! -x "$binary" ]; then
        echo "FAIL $lab/$name (program not built: $binary)"
        fail=$((fail + 1))
        continue
    fi

    actual=$("$binary" < "$input" 2>&1)
    if [ "$actual" = "$(cat "$expected")" ]; then
        pass=$((pass + 1))
    else
        echo "FAIL $lab/$name"
        echo "  expected: $(cat "$expected" | tr '\n' '|')"
        echo "  actual:   $(printf '%s' "$actual" | tr '\n' '|')"
        fail=$((fail + 1))
    fi
done

echo "$pass passed, $fail failed"
[ "$fail" -eq 0 ]
