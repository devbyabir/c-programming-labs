# C Programming Labs

36 standalone C11 exercises from introductory university labs, organized by topic.
The original exercises date from November–December 2023; later correctness and
safety fixes are recorded in [REVIEW_NOTES.md](REVIEW_NOTES.md).

## Topics

- Basic output, arithmetic and operators
- Conditions: prime numbers, grades, leap years and factorials
- Loops: digits, integer reversal and star patterns
- Functions and call-by-value demonstrations
- Fixed-size arrays, linear search and array reversal
- Pointers, pointer arithmetic and swapping through pointers

These labs do **not** currently cover recursion, strings, dynamic allocation,
structures, unions or file I/O. There are no third-party C library dependencies.

## Quick start

Clone the repository and install a C11 compiler (GCC or Clang):

```sh
git clone https://github.com/devbyabir/c-programming-labs.git
cd c-programming-labs
gcc -std=c11 -Wall -Wextra -Wpedantic lab02-operators/04_quadratic_roots.c -o quadratic -lm
./quadratic
```

Example input and output (after the prompt):

```text
1 -3 2
First root = 2.00
Second root = 1.00
```

`-lm` links the math library needed by the quadratic solver on Linux. Each source
has its own `main`; compile programs separately. Keep `include/` alongside the lab
folders because input-reading programs include the shared validation header.

On Windows, use a GCC/Clang toolchain, compile with `-o quadratic.exe`, and run
`.\quadratic.exe` in PowerShell or `quadratic.exe` in Command Prompt.

## Build and test all labs

On Linux/macOS, install GNU Make, Python 3.9+ and a C11 compiler. The Makefile uses
POSIX shell commands; on Windows use WSL or an MSYS2 environment for these targets.

```sh
make CC=gcc
make test CC=gcc
make sanitize CC=clang
make format-check CLANG_FORMAT=clang-format-18
make clean
```

- Builds use `-Wall -Wextra -Wpedantic -Werror` and write executables to `build/`.
- `make test` runs the runner's self-tests and all input/output fixtures.
- `make sanitize` rebuilds with AddressSanitizer and UndefinedBehaviorSanitizer.
  Sanitizer support depends on the compiler/platform; Linux CI runs both.
- `make format` applies the repository style. Use clang-format 18 to match CI.
- After a build, the portable runner can also be invoked with
  `python3 tests/run_tests.py build` (`python` on Windows, with `.exe` binaries).

GitHub Actions checks formatting, GCC/Clang builds, regression tests and
sanitizers. Workflow permissions are read-only; external actions are pinned to a
commit, with Dependabot checking for updates monthly.

## Input and numeric limits

- Input is whitespace-separated: multiple values may share a line or span lines.
- `include/lab_input.h` reads at most 127 characters per token and checks complete
  conversion with `strtol`/`strtod`, including integer bounds and conversion errors.
  EOF, oversized tokens, `12abc`, NaN and infinity are rejected. Extra tokens after
  the required inputs are not consumed or validated.
- The supported/tested arithmetic model is 32-bit `int` and 64-bit `long long`.
- Factorials accept 0–20; marks accept 0–100; star patterns accept 0–1000 rows.
- Radius must be non-negative and both calculated results must remain finite.
- The quadratic solver rejects zero `a` and coefficients whose intermediate integer
  arithmetic would overflow; roots are displayed to two decimal places.
- Invalid input/domain errors return status 1. Arithmetic demos report an undefined
  quotient for a zero divisor while still returning the other valid results.
- The call-by-value swap intentionally leaves the caller's values unchanged.

## Lab index

| Program | Exercise |
| --- | --- |
| [lab01-basics/01_hello_world.c](lab01-basics/01_hello_world.c) | Hello world |
| [lab01-basics/02_add_two_numbers.c](lab01-basics/02_add_two_numbers.c) | Add two numbers |
| [lab01-basics/03_multiply_two_numbers.c](lab01-basics/03_multiply_two_numbers.c) | Multiply two numbers |
| [lab01-basics/04_circle_area_circumference.c](lab01-basics/04_circle_area_circumference.c) | Circle area and circumference |
| [lab01-basics/05_arithmetic_operations.c](lab01-basics/05_arithmetic_operations.c) | Arithmetic operations |
| [lab02-operators/01a_swap_with_temp.c](lab02-operators/01a_swap_with_temp.c) | Swap with a temporary variable |
| [lab02-operators/01b_swap_without_temp.c](lab02-operators/01b_swap_without_temp.c) | Swap without a temporary variable |
| [lab02-operators/02_increment_decrement.c](lab02-operators/02_increment_decrement.c) | Increment and decrement |
| [lab02-operators/03_maximum_of_two.c](lab02-operators/03_maximum_of_two.c) | Maximum of two numbers |
| [lab02-operators/04_quadratic_roots.c](lab02-operators/04_quadratic_roots.c) | Quadratic equation roots |
| [lab03-conditions/01_even_or_odd.c](lab03-conditions/01_even_or_odd.c) | Even or odd |
| [lab03-conditions/02_prime_check.c](lab03-conditions/02_prime_check.c) | Prime check |
| [lab03-conditions/03_largest_of_three.c](lab03-conditions/03_largest_of_three.c) | Largest and smallest of three numbers |
| [lab03-conditions/04_grade_calculator.c](lab03-conditions/04_grade_calculator.c) | Grade calculator |
| [lab03-conditions/05_leap_year.c](lab03-conditions/05_leap_year.c) | Leap year |
| [lab03-conditions/06_factorial.c](lab03-conditions/06_factorial.c) | Factorial |
| [lab04-loops/01_print_1_to_10.c](lab04-loops/01_print_1_to_10.c) | Print 1 to 10 |
| [lab04-loops/02_count_digits.c](lab04-loops/02_count_digits.c) | Count digits |
| [lab04-loops/03_reverse_integer.c](lab04-loops/03_reverse_integer.c) | Reverse an integer |
| [lab04-loops/04_sum_of_digits.c](lab04-loops/04_sum_of_digits.c) | Sum of digits |
| [lab04-loops/05_first_last_digit_sum.c](lab04-loops/05_first_last_digit_sum.c) | First and last digit sum |
| [lab04-loops/06_star_triangle.c](lab04-loops/06_star_triangle.c) | Star triangle |
| [lab05-functions/01_arithmetic_functions.c](lab05-functions/01_arithmetic_functions.c) | Arithmetic with functions |
| [lab05-functions/02_swap_call_by_value.c](lab05-functions/02_swap_call_by_value.c) | Swap with call by value |
| [lab05-functions/03_max_min_functions.c](lab05-functions/03_max_min_functions.c) | Maximum and minimum with functions |
| [lab05-functions/04_prime_function.c](lab05-functions/04_prime_function.c) | Prime check with a function |
| [lab06-arrays/01_array_input_output.c](lab06-arrays/01_array_input_output.c) | Array input and output |
| [lab06-arrays/02_linear_search.c](lab06-arrays/02_linear_search.c) | Linear search |
| [lab06-arrays/03_array_sum.c](lab06-arrays/03_array_sum.c) | Array sum |
| [lab06-arrays/04_array_max_min.c](lab06-arrays/04_array_max_min.c) | Largest and smallest element |
| [lab06-arrays/05_reverse_array.c](lab06-arrays/05_reverse_array.c) | Reverse an array |
| [lab07-08-pointers/01_largest_of_three_pointers.c](lab07-08-pointers/01_largest_of_three_pointers.c) | Largest of three with pointers |
| [lab07-08-pointers/02_array_sum_pointers.c](lab07-08-pointers/02_array_sum_pointers.c) | Array sum with pointers |
| [lab07-08-pointers/03_swap_pointers.c](lab07-08-pointers/03_swap_pointers.c) | Swap with pointers |
| [lab07-08-pointers/04_add_pointers.c](lab07-08-pointers/04_add_pointers.c) | Add with pointers |
| [lab07-08-pointers/05_array_io_pointers.c](lab07-08-pointers/05_array_io_pointers.c) | Array input and output with pointers |

## Adding or changing an exercise

Keep each program small and standalone, use `int main(void)`, and follow
`.clang-format`. Reuse the input helpers for checked numeric conversions. Add
regression fixtures for changed behavior before opening a pull request.

A fixture consists of `tests/cases/<lab>/<program>.<case>.in` and `.expected`.
An optional `.status` holds the expected integer exit code (default: 0).
Output is compared exactly except for CRLF/LF normalization; unexpected stderr,
wrong exit status, missing fixtures/executables and execution over five seconds
fail the test. See [tests/README.md](tests/README.md) for details.

Run `make test`, `make sanitize` and `make format-check` before submitting changes.
Report the compiler/platform and any checks you could not run. Do not commit
executables or generated files from `build/`.

## License and provenance

[MIT](LICENSE). Original lab dates and relevant attribution are kept in source
headers. These are educational examples, not a production numerical library.
