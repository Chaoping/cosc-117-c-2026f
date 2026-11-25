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

- `printf()` function:

  - `printf("hello %s\n", "Chaoping");`
  - `printf("the sum is %d\n", total);`

- Data Types:

  - char
  - int (boolean is also int, 0 for `False`, non-zero is `True`)
  - long 
  - float
  - double

- Reading user input:

  - `scanf()` function: like `printf()` but the opposite direction

    - ```c
      int val;
      scanf("%d", &val); // %d specifier says we expect user to enter a decimal integer
      ```

    - Note that we have `&` symbol. It is the *address-of* operator. `&val` is the address of the variable `val`

  - `char getchar()` function: read a single character, then you need to process character by character

- Arrays in C:

  - Declare an array:

  - ```
    int a[5];
    ```

  - Data type and the size of the array must be known to the compiler.

  - The address of the i-th element in an array can be computed as:

    - $\text{BaseAddrOfTheArray} + i * \text{SizeOfTheDataType}$ 
    - 