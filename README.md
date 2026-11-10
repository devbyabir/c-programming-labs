# C Programming Labs 🚀

Welcome to the **C Programming Labs** repository! This repository contains a structured collection of C programming exercises, lab assignments, and practice code designed to help master foundational programming concepts, memory management, and algorithms.

---

## 📌 Features & Topics Covered

- 🔹 **Basics & Syntax:** Input/output, data types, operators, and control flow.
- 🔹 **Functions & Recursion:** Modular coding practices and recursive solutions.
- 🔹 **Arrays & Strings:** Safe string manipulations and array operations.
- 🔹 **Pointers & Memory Management:** Dynamic memory allocation (`malloc`, `calloc`, `free`) and pointer arithmetic.
- 🔹 **Structures & Unions:** Custom data types and file handling exercises.

---

## 🛠️ How to Compile and Run

To compile and run any `.c` file in this repository, follow these steps using `gcc`:

### 1. Prerequisites
Ensure you have `gcc` (GNU Compiler Collection) installed on your system.
```bash
gcc --version
```

### 2. Compilation
Navigate to the directory containing the file and compile it:
```bash
gcc -Wall -Wextra filename.c -o output
```
> **Note:** Using `-Wall -Wextra` flags is highly recommended as it enables standard warnings to write cleaner and safer code.

### 3. Running the Program
- **On Linux/macOS:**
  ```bash
  ./output
  ```
- **On Windows (Command Prompt / PowerShell):**
  ```cmd
  output.exe
  ```

---

## 🛡️ Best Practices & Code Safety

- **Avoid unsafe functions:** Use `fgets()` instead of `gets()` or unsafe `scanf("%s", ...)` to prevent **Buffer Overflow** vulnerabilities.
- **Memory Cleanup:** Always release dynamically allocated memory using `free()` to prevent memory leaks.
- **Clean Builds:** Binaries and temporary object files (`.exe`, `.out`, `.o`) are ignored via `.gitignore` to keep the repository clean.

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).
