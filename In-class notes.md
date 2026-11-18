# C Programming Language

- C is a compiled language: source code needs to be compiled before it can be run as a program.
  - Source code: the plain-text
  - Compiled program: binary (the machine language for the platform)
  - Compiler: a program that compiles the source code to binary program. Compilers are platform-specific. The most commonly used C compiler today is `gcc` (GNU C Compiler)
- A function in C (influenced other languages like Java, C++, C#, etc.):
  - the type of the function (the return type)
  - function name
  - parameters
  - function body

- The `main()` function is the entry point of a program
- To compile a c program, run `gcc <source.c>`. It compiles the source code to a file called `a.out`. To specify the name of compiled file, run `gcc <source.c> -o <output_name.exe>`. `-o` specifies output file name

- The compile process
  - Preprocessing: process directives like `#define`,  `#include`
    - `#define` some constant for substitution
    - `#include <stdio.h>` : header file provided by the compiler. `stdio.h` declares many I/O functions. For example `printf()`
    - `#include my_header.h`: our own header file
  - 

- A header file provides function prototypes (the declaration, not the definition)
  - declaration specifies what the function takes as input (parameters), and what it returns (return type)
  - definition defines how the function runs