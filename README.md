# C Programming Labs

C programming exercises from my first semester at Zhengzhou University in 2023.
Reviewed and organized for GitHub in 2026.

These are short beginner lab programs, one per exercise. The exercises were set
by the course; the code is my lab work. A few bugs were fixed during the 2026
review. Those fixes are marked in the code and listed in
[REVIEW_NOTES.md](REVIEW_NOTES.md); they were not part of the original
submissions.

## Topics covered

- Input/output, variables and operators
- Conditions and loops
- Functions and parameter passing
- Arrays and basic searching
- Pointers

## Exercise index

Lab dates are from the original 2023 lab sessions. "Original file" is the file
name in my coursework folder. ✱ = corrected in the 2026 review.

| Lab | File | What it does | Lab date | Original file |
| --- | --- | --- | --- | --- |
| 1 | [01_hello_world.c](lab01-basics/01_hello_world.c) | Prints a fixed message | 2023-11-15 | `1st.c` |
| 1 | [02_add_two_numbers.c](lab01-basics/02_add_two_numbers.c) | Adds two fixed integers | 2023-11-15 | `2nd.c` |
| 1 | [03_multiply_two_numbers.c](lab01-basics/03_multiply_two_numbers.c) | Multiplies two fixed integers | 2023-11-15 | `3rd.c` |
| 1 | [04_circle_area_circumference.c](lab01-basics/04_circle_area_circumference.c) | Circle area and circumference | 2023-11-15 | `4th.c` |
| 1 | [05_arithmetic_operations.c](lab01-basics/05_arithmetic_operations.c) ✱ | +, −, ×, ÷ of two integers | 2023-11-15 | `5th.c` |
| 2 | [01a_swap_with_temp.c](lab02-operators/01a_swap_with_temp.c) | Swap with a temporary variable | 2023-11-16 | `exc1.1.c` |
| 2 | [01b_swap_without_temp.c](lab02-operators/01b_swap_without_temp.c) | Swap without a temporary variable | 2023-11-16 | `exc1.2.c` |
| 2 | [02_increment_decrement.c](lab02-operators/02_increment_decrement.c) | Prefix vs postfix `++` / `--` | 2023-11-16 | `exc 2.c` |
| 2 | [03_maximum_of_two.c](lab02-operators/03_maximum_of_two.c) | Larger of two numbers with `?:` | 2023-11-16 | `exc 3.c` |
| 2 | [04_quadratic_roots.c](lab02-operators/04_quadratic_roots.c) ✱ | Quadratic equation roots | 2023-11-16 | `exc 4.c` |
| 3 | [01_even_or_odd.c](lab03-conditions/01_even_or_odd.c) | Even or odd | 2023-11-22 | `Exe1.c` |
| 3 | [02_prime_check.c](lab03-conditions/02_prime_check.c) ✱ | Prime check | 2023-11-22 | `Exe2.c` |
| 3 | [03_largest_of_three.c](lab03-conditions/03_largest_of_three.c) | Largest of three (**incomplete**) | 2023-11-22 | `Exe.3.c` |
| 3 | [04_grade_calculator.c](lab03-conditions/04_grade_calculator.c) | Mark to letter grade | 2023-11-22 | `Exe4.c` |
| 3 | [05_leap_year.c](lab03-conditions/05_leap_year.c) | Leap year | 2023-11-22 | `Exe5.c` |
| 3 | [06_factorial.c](lab03-conditions/06_factorial.c) ✱ | Factorial (n ≤ 20) | 2023-11-22 | `Exe6.c` |
| 4 | [01_print_1_to_10.c](lab04-loops/01_print_1_to_10.c) | Prints 1 to 10 | 2023-11-23 | `exe1.c` |
| 4 | [02_count_digits.c](lab04-loops/02_count_digits.c) ✱ | Counts digits | 2023-11-23 | `exe2.c` |
| 4 | [03_reverse_integer.c](lab04-loops/03_reverse_integer.c) | Reverses an integer | 2023-11-23 | `exe3.c` |
| 4 | [04_sum_of_digits.c](lab04-loops/04_sum_of_digits.c) | Sum of digits | 2023-11-23 | `exe4.c` |
| 4 | [05_first_last_digit_sum.c](lab04-loops/05_first_last_digit_sum.c) | First + last digit | 2023-11-23 | `exe5.c` |
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
| 7–8 | [01_largest_of_three_pointers.c](lab07-08-pointers/01_largest_of_three_pointers.c) | Largest of three via pointers | 2023-12-06/07 | `Untitled1.c` |
| 7–8 | [02_array_sum_pointers.c](lab07-08-pointers/02_array_sum_pointers.c) | Array sum via pointers | 2023-12-06/07 | `Untitled2.c` |
| 7–8 | [03_swap_pointers.c](lab07-08-pointers/03_swap_pointers.c) | Swap via pointers | 2023-12-06/07 | `Untitled3.c` |
| 7–8 | [04_add_pointers.c](lab07-08-pointers/04_add_pointers.c) | Add via pointers | 2023-12-06/07 | `Untitled4.c` |
| 7–8 | [05_array_io_pointers.c](lab07-08-pointers/05_array_io_pointers.c) | Array input/output via pointers | 2023-12-06/07 | `Untitled5.c` |

## Compile and run

Each file is a standalone program. Use any C11 compiler, for example GCC
(MinGW-w64 on Windows).

Linux:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic lab04-loops/02_count_digits.c -o count_digits
./count_digits
```

Windows (PowerShell or cmd):

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic lab04-loops\02_count_digits.c -o count_digits.exe
.\count_digits.exe
```

The quadratic solver uses `sqrt`; on Linux add `-lm` at the end of the command.

## Limitations

These are learning exercises, not robust programs. Input from `scanf` is not
validated, so non-numeric input gives meaningless output. Large values can
overflow `int`. Use small, sensible inputs. Per-file limits are noted in the
file headers.

## Licence

My code in this repository is released under the [MIT License](LICENSE).
The licence does not cover the course's exercise assignments or any teaching
materials, which belong to their owners and are not included here. The
quadratic solver was written with help from a tutorial video (source not
recorded); see [REVIEW_NOTES.md](REVIEW_NOTES.md).
