# ft_printf
### The goal of this project is to implement my own printf function.

I have to implement the following conversions:

- %c Prints a single character.
- %s Prints a string (as defined by the common C convention).
- %p The void * pointer argument has to be printed in hexadecimal format.
- %d Prints a decimal (base 10) number.
- %i Prints an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x Prints a number in hexadecimal (base 16) lowercase format.
- %X Prints a number in hexadecimal (base 16) uppercase format.
- %% Prints a percent sign.

#### Requirements:
- Don’t implement the buffer management of the original printf().
- Your function has to handle the following conversions: cspdiuxX%
- Your function will be compared against the original printf().
- You must use the command ar to create your library. Using the libtool command is forbidden.
- Your libftprintf.a has to be created at the root of your repository


#### Example of how printf should work:
![image](https://user-images.githubusercontent.com/87651732/222954845-ac588ca4-7cac-452f-88d9-042f05eee3de.png)





# ft_printf

ft_printf is a custom implementation of the famous `printf` function from the C Standard Library. The goal of this project is to understand the intricacies of string formatting and low-level output functions by creating our own version of `printf`.

![Banner](https://place-hold.it/1200x600)

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation and Usage](#installation-and-usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

`printf` is a common function used in C for formatted output. It's part of the C Standard Library and is defined in `<stdio.h>`. The function can print a variety of data types and has numerous options for formatting output, including control of field width, precision, and padding.

In this project, we've implemented our own version of `printf` to better understand its internals and to improve our skills in C programming.

## Features

Our `ft_printf` supports the following conversions:

- `%c`: Prints a single character.
- `%s`: Prints a string (as defined by the common C convention).
- `%p`: The `void *` pointer argument is printed in hexadecimal format.
- `%d`: Prints a decimal (base 10) number.
- `%i`: Prints an integer in base 10.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.

The function doesn't implement the buffer management of the original `printf`, and it will be compared against the original `printf` for correctness.

## Installation and Usage

To use `ft_printf`, clone the repository and compile it:

```bash
git clone https://github.com/Neilus03/ft_printf.git
cd ft_printf
make
```
This will create a libftprintf.a library file at the root of your repository. To use the ft_printf function in your code, include the ft_printf.h header file and link against the library:

```
gcc -L. -lftprintf -o your_program your_program.c
```

