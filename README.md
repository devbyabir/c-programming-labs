# C Programming Labs

[![CI](https://github.com/devbyabir/c-programming-labs/actions/workflows/ci.yml/badge.svg)](https://github.com/devbyabir/c-programming-labs/actions/workflows/ci.yml)

My C programming lab work from my **first semester at Zhengzhou University**,
written in eight lab sessions in **November–December 2023**. It was my first
programming course: 36 short programs, one per exercise, that go from printing
a line of text to passing pointers to functions.

The exercises were set by the course; the code is my lab work. The programs
were reviewed in 2026: bugs were fixed, input is now validated, and every
program is covered by automated tests that run on each push. All changes are
marked in the code and listed in [REVIEW_NOTES.md](REVIEW_NOTES.md); they were
not part of the original 2023 submissions.

## What I practised

| Lab | Topic | What I practised |
| --- | --- | --- |
| [1](lab01-basics) | Basics | `printf` and `scanf`, `int` and `double` variables, arithmetic |
| [2](lab02-operators) | Operators | Swapping values, prefix and postfix `++`/`--`, the `?:` operator, `math.h` |
| [3](lab03-conditions) | Conditions | `if`/`else` ladders, `%` for even/odd, prime and leap-year checks |
| [4](lab04-loops) | Loops | `for`, `while` and `do-while`, taking a number apart digit by digit, nested loops |
| [5](lab05-functions) | Functions | Prototypes, return values, call by value, `bool` |
| [6](lab06-arrays) | Arrays | Reading into an array, linear search, sum, max/min, reversing in place |
| [7–8](lab07-08-pointers) | Pointers | `&` and `*`, pointer arithmetic over an array, swapping through pointer parameters |

To follow the progression, read the labs in order. The same task sometimes
comes back in a later lab with a new tool: swapping two numbers in Lab 2, with a
function in Lab 5 (which shows why call by value doesn't work), and with
pointers in Lab 7–8.

## Exercise index

Lab dates are from the original 2023 lab sessions. "Original file" is the file
name in my coursework folder. ✱ = bug fixed in a 2026 review.

| Lab | File | What it does | Lab date | Original file |
| --- | --- | --- | --- | --- |
| 1 | [01_hello_world.c](lab01-basics/01_hello_world.c) | Prints a fixed message | 2023-11-15 | `1st.c` |
| 1 | [02_add_two_numbers.c](lab01-basics/02_add_two_numbers.c) | Adds two fixed integers | 2023-11-15 | `2nd.c` |
| 1 | [03_multiply_two_numbers.c](lab01-basics/03_multiply_two_numbers.c) | Multiplies two fixed integers | 2023-11-15 | `3rd.c` |
| 1 | [04_circle_area_circumference.c](lab01-basics/04_circle_area_circumference.c) | Circle area and circumference | 2023-11-15 | `4th.c` |
| 1 | [05_arithmetic_operations.c](lab01-basics/05_arithmetic_operations.c) ✱ | +, −, ×, ÷ of two integers | 2023-11-15 | `5th.c` |
| 2 | [01a_swap_with_temp.c](lab02-operators/01a_swap_with_temp.c) | Swap with a temporary variable | 2023-11-16 | `exc1.1.c` |
| 2 | [01b_swap_without_temp.c](lab02-operators/01b_swap_without_temp.c) ✱ | Swap without a temporary variable | 2023-11-16 | `exc1.2.c` |
| 2 | [02_increment_decrement.c](lab02-operators/02_increment_decrement.c) | Prefix vs postfix `++` / `--` | 2023-11-16 | `exc 2.c` |
| 2 | [03_maximum_of_two.c](lab02-operators/03_maximum_of_two.c) | Larger of two numbers with `?:` | 2023-11-16 | `exc 3.c` |
| 2 | [04_quadratic_roots.c](lab02-operators/04_quadratic_roots.c) ✱ | Quadratic equation roots | 2023-11-16 | `exc 4.c` |
| 3 | [01_even_or_odd.c](lab03-conditions/01_even_or_odd.c) | Even or odd | 2023-11-22 | `Exe1.c` |
| 3 | [02_prime_check.c](lab03-conditions/02_prime_check.c) ✱ | Prime check | 2023-11-22 | `Exe2.c` |
| 3 | [03_largest_of_three.c](lab03-conditions/03_largest_of_three.c) ✱ | Largest and smallest of three, even or odd | 2023-11-22 | `Exe.3.c` |
| 3 | [04_grade_calculator.c](lab03-conditions/04_grade_calculator.c) | Mark to letter grade | 2023-11-22 | `Exe4.c` |
| 3 | [05_leap_year.c](lab03-conditions/05_leap_year.c) | Leap year | 2023-11-22 | `Exe5.c` |
| 3 | [06_factorial.c](lab03-conditions/06_factorial.c) ✱ | Factorial (n ≤ 20) | 2023-11-22 | `Exe6.c` |
| 4 | [01_print_1_to_10.c](lab04-loops/01_print_1_to_10.c) | Prints 1 to 10 | 2023-11-23 | `exe1.c` |
| 4 | [02_count_digits.c](lab04-loops/02_count_digits.c) ✱ | Counts digits | 2023-11-23 | `exe2.c` |
| 4 | [03_reverse_integer.c](lab04-loops/03_reverse_integer.c) ✱ | Reverses an integer | 2023-11-23 | `exe3.c` |
| 4 | [04_sum_of_digits.c](lab04-loops/04_sum_of_digits.c) ✱ | Sum of digits | 2023-11-23 | `exe4.c` |
| 4 | [05_first_last_digit_sum.c](lab04-loops/05_first_last_digit_sum.c) ✱ | First + last digit | 2023-11-23 | `exe5.c` |
| 4 | [06_star_triangle.c](lab04-loops/06_star_triangle.c) | Star triangle pattern | 2023-11-23 | `exe6.c` |
| 5 | [01_arithmetic_functions.c](lab05-functions/01_arithmetic_functions.c) ✱ | Arithmetic using functions | 2023-11-29 | `1st.c` |
| 5 | [02_swap_call_by_value.c](lab05-functions/02_swap_call_by_value.c) | Call-by-value swap demonstration | 2023-11-29 | `2nd.c` |
| 5 | [03_max_min_functions.c](lab05-functions/03_max_min_functions.c) | Max and min using functions | 2023-11-29 | `3rd.c` |
| 5 | [04_prime_function.c](lab05-functions/04_prime_function.c) ✱ | Prime check in a function | 2023-11-29 | `4th.c` |
| 6 | [01_array_input_output.c](lab06-arrays/01_array_input_output.c) | Reads and prints 5 elements | 2023-11-30 | `Untitled1.c` |
| 6 | [02_linear_search.c](lab06-arrays/02_linear_search.c) | Linear search | 2023-11-30 | `Untitled2.c` |
| 6 | [03_array_sum.c](lab06-arrays/03_array_sum.c) | Sum of elements | 2023-11-30 | `Untitled3.c` |
| 6 | [04_array_max_min.c](lab06-arrays/04_array_max_min.c) | Largest and smallest element | 2023-11-30 | `Untitled4.c` |
| 6 | [05_reverse_array.c](lab06-arrays/05_reverse_array.c) ✱ | Reverses an array | 2023-11-30 | `Untitled5.c` |
| 7–8 | [01_largest_of_three_pointers.c](lab07-08-pointers/01_largest_of_three_pointers.c) ✱ | Largest of three via pointers | 2023-12-06/07 | `Untitled1.c` |
| 7–8 | [02_array_sum_pointers.c](lab07-08-pointers/02_array_sum_pointers.c) ✱ | Array sum via pointers | 2023-12-06/07 | `Untitled2.c` |
| 7–8 | [03_swap_pointers.c](lab07-08-pointers/03_swap_pointers.c) | Swap via pointers | 2023-12-06/07 | `Untitled3.c` |
| 7–8 | [04_add_pointers.c](lab07-08-pointers/04_add_pointers.c) ✱ | Add via pointers | 2023-12-06/07 | `Untitled4.c` |
| 7–8 | [05_array_io_pointers.c](lab07-08-pointers/05_array_io_pointers.c) | Array input/output via pointers | 2023-12-06/07 | `Untitled5.c` |

## Build and test

With `make` and GCC or Clang installed:

```bash
make              # build every program into build/
make test         # build, then run all input/output tests
make sanitize     # rebuild with AddressSanitizer + UBSan and run the tests
make format       # format the code with clang-format
make clean        # remove build/
```

Programs are built with `-std=c11 -Wall -Wextra -Wpedantic -Werror`, so any
compiler warning fails the build. On Windows, `make` is available through
MSYS2 or WinLibs (`mingw32-make`).

### Example

```text
$ ./build/lab03-conditions/03_largest_of_three
Enter Three Numbers A, B and C:
4 9 7
9 is the largest number. It is Odd.
4 is the smallest number. It is Even.
```

### Compiling one file by hand

Each file is a standalone program:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic lab04-loops/02_count_digits.c -o count_digits -lm
./count_digits
```

On Windows, use `lab04-loops\02_count_digits.c`, `-o count_digits.exe` and
run `.\count_digits.exe`. Only the quadratic solver needs `-lm` (on Linux).

## Tests

Each test case is a pair of files in [`tests/cases/`](tests/cases): a `.in`
file piped to the program and a `.expected` file with its exact output. There
are 83 cases covering every program, including edge cases such as `0`,
negative numbers, values near `INT_MAX` and `INT_MIN`, division by zero and
non-numeric input. [`tests/run_tests.sh`](tests/run_tests.sh) runs them, and
[GitHub Actions](.github/workflows/ci.yml) runs the build and tests with GCC and
Clang, with and without sanitizers, on every push.

## Limitations

These are learning exercises, and input is read with `scanf`:

- Non-numeric input is rejected, but input that starts with a number (for
  example `12abc`) is read as that number.
- Integers read with `scanf("%d")` must fit in an `int` (−2147483648 to
  2147483647 on common platforms). A larger number such as `99999999999` is
  not detected, and the C standard does not define what value is stored.
- The quadratic solver rejects coefficients so large that `b*b - 4*a*c` would
  not fit in a `long long` (for example `2147483647 0 2147483647`).

Per-file limits are noted in the file headers.

## Licence

My code in this repository is released under the [MIT License](LICENSE).
The licence does not cover the course's exercise assignments or any teaching
materials, which belong to their owners and are not included here. The
quadratic solver was written with help from a tutorial video (source not
recorded); see [REVIEW_NOTES.md](REVIEW_NOTES.md).
