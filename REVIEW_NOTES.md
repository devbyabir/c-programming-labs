# Review notes (2026)

The programs were written for lab sessions in November–December 2023 and
reviewed in 2026 before publishing. Original lab dates are kept in each file
header. The README index maps every file to its original file name.

## Preparation

- Copied only the 36 non-empty `.c` files. A whitespace-only file, compiled
  files, editor settings, lab reports, lecture slides and teacher answer
  material were left out.
- Removed personal details from the original comments and gave files
  descriptive names. Exercise descriptions in the headers are paraphrased.
- Some Lab 5 and Lab 6 programs printed "This code is written by Abir Ahmmed".
  That note now appears as a header comment instead of program output.

## Corrections (not in the 2023 submissions)

| File | Original problem | Change |
| --- | --- | --- |
| `lab03-conditions/02_prime_check.c` | 0, 1 and negative numbers reported as prime | Numbers below 2 report "not Prime" |
| `lab04-loops/02_count_digits.c` | `0` counted as 0 digits | `while` → `do-while` |
| `lab06-arrays/05_reverse_array.c` | Reversal started at index 4 of 8, so only the first five elements were reversed | Starts at index 7 |
| `lab01-basics/05_arithmetic_operations.c` | Divided by zero when the second number was 0 | Division skipped and reported as undefined |
| `lab05-functions/01_arithmetic_functions.c` | Same | Same |
| `lab02-operators/04_quadratic_roots.c` | Divided by zero when `a = 0` | Rejected with a message |
| `lab03-conditions/06_factorial.c` | n > 20 overflowed silently | n > 20 rejected |
| `lab05-functions/04_prime_function.c` | `i * i` could overflow for large primes | `i <= num / i` |

## Intentionally unchanged

- `lab05-functions/02_swap_call_by_value.c`: `main()`'s values stay unchanged.
  That is the call-by-value demonstration.

The other items first listed here (the incomplete Lab 3.3, the repeated
pointer comparison, the quadratic formatting quirk, and unchecked `scanf` and
`int` overflow) were fixed in the second review below.

## Second review (2026-11)

### Bug fixes

| File | Original problem | Change |
| --- | --- | --- |
| All 28 programs that read input | `scanf` results were not checked, so invalid input such as `abc` left variables uninitialised (`abc` → "0 is Even.") | Each `scanf` is checked; invalid input prints a message and exits with code 1 |
| `lab03-conditions/03_largest_of_three.c` | Incomplete: only found the largest number | Smallest number and even/odd output added |
| `lab07-08-pointers/01_largest_of_three_pointers.c` | Second condition was `*pb > *pc && *pb > *pc` | Now `*pb >= *pa && *pb >= *pc` |
| `lab02-operators/04_quadratic_roots.c` | `b*b - 4*a*c` overflowed `int` (e.g. `50000 50000 1`); `a < 0` printed `+ i-1.00`; some roots printed `-0.00` | Discriminant in `long long`; `fabs` on the imaginary part; values that round to zero print as `0.00` |
| `lab04-loops/03_reverse_integer.c` | `1999999999` overflowed and printed 1410065399 | Result built in `long long`; prints 9999999991 |
| `lab04-loops/04_sum_of_digits.c` | `-123` gave −6 | Uses the absolute value; gives 6 |
| `lab04-loops/05_first_last_digit_sum.c` | `7` gave 14 and `-1234` gave −1238 | Input outside 1000–9999 is rejected |
| `lab02-operators/01b_swap_without_temp.c` | `a + b` could overflow `int` | Pairs that would overflow are rejected |
| `lab01-basics/05_arithmetic_operations.c`, `lab05-functions/01_arithmetic_functions.c`, `lab07-08-pointers/04_add_pointers.c` | Sum, difference and product overflowed `int` near `INT_MAX` | Results use `long long` (and `double` for division) |
| `lab01-basics/04_circle_area_circumference.c`, `lab04-loops/06_star_triangle.c` | Negative radius or row count accepted | Rejected |

### Code quality

- All files formatted with one style ([`.clang-format`](.clang-format)):
  4-space indentation, braces on their own line, no tabs.
- Every output ends with a newline, so the shell prompt no longer appears on
  the last output line.
- Array sizes come from `#define SIZE` or `sizeof arr / sizeof arr[0]`
  instead of repeated literal numbers.
- `int main(void)` everywhere; consistent variable names (`number2`, not
  `Number2`); pi is a `double` constant with full precision; the multiply
  program prints its variables instead of a hard-coded "4 and 5".
- The linear search also reports the index where the value was found.

### Tooling

- `Makefile` with `all`, `test`, `sanitize`, `format`, `format-check` and
  `clean` targets. Builds use `-Werror`.
- 78 input/output test cases in `tests/cases/`, run by `tests/run_tests.sh`.
- GitHub Actions workflow building and testing with GCC and Clang, plus a
  sanitizer run (AddressSanitizer + UndefinedBehaviorSanitizer).

### Verification (2026-11-06)

GCC 13.3.0 and Clang on Ubuntu 24.04: all 36 programs build with
`-Wall -Wextra -Wpedantic -Werror` and no warnings. All 78 test cases pass with
both compilers and with sanitizers enabled. Run against the original code, the
same tests fail 31 cases, which confirms they detect the old bugs (some of those
failures are only the improved output wording).

## Provenance

The original lab report says the quadratic solver was written with help from a
tutorial video. The video was not recorded, so it is not credited by name.

The teacher's answer files are mostly images, so they could not be compared in
full with this code. The few readable fragments do not match it.

## Verification (2026-10-14)

Compiler: GCC 16.2.0 (WinLibs, MinGW-w64 UCRT) on Windows 11.

All 36 programs were compiled separately with:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic FILE.c -o FILE.exe -lm
```

Result: 36 compiled, 0 warnings, 0 errors. Executables were built outside the
repository.

The corrected programs were run with piped input and a 5-second timeout. Every
output matched the hand-calculated expectation:

| Program | Input → actual output |
| --- | --- |
| 02_prime_check | `0`, `1`, `-7`, `9` → not Prime; `2`, `7`, `97` → Prime |
| 02_count_digits | `0` → 1, `7` → 1, `12345` → 5, `-120` → 3 |
| 05_reverse_array | (none) → 8 7 6 5 4 3 2 1 |
| 05_arithmetic_operations | `7 0` → division undefined; `7 2` → 3.500000; `-9 4` → -2.250000 |
| 01_arithmetic_functions | `7 0` → division undefined; `7 2` → 3.500000 |
| 04_quadratic_roots | `0 2 1` → rejected (exit code 1); `1 -3 2` → 2.00, 1.00; `1 2 1` → -1.00, -1.00; `1 2 5` → -1.00 ± i2.00 |
| 06_factorial | `0` → 1, `1` → 1, `5` → 120, `20` → 2432902008176640000, `21` → rejected, `-3` → error |
| 04_prime_function | `0`, `1`, `9`, `25`, `2147483646` → not prime; `2`, `97`, `2147483647` → prime |

The remaining 28 programs were run with ordinary input (32 runs in total; the
grade calculator, leap year, linear search and largest-of-three-with-pointers
programs were each run with two inputs). All gave correct output. The
call-by-value swap showed the values swapped inside the function and unchanged
in `main()`, as intended. `-1 0 -1` in the quadratic solver printed
`-0.00 + i-1.00`, the known formatting quirk described above.

Not tested: invalid (non-numeric) input and overflow-range values, which are
documented limitations.
