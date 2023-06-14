# ft_printf

ft_printf is a custom implementation of the famous `printf` function from the C Standard Library. The goal of this 42 project is to understand the intricacies of string formatting and low-level output functions by creating our own version of `printf`.

![image](https://user-images.githubusercontent.com/87651732/222954845-ac588ca4-7cac-452f-88d9-042f05eee3de.png)

## Table of Contents

- [Introduction](#Introduction)
- [Features](#Features)
- [Requirements](#Requirements)
- [Installation and Usage](#Installation-and-usage)



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

## Requirements:
- Don’t implement the buffer management of the original printf().
- Your function has to handle the following conversions: cspdiuxX%
- Your function will be compared against the original printf().
- You must use the command ar to create your library. Using the libtool command is forbidden.
- Your libftprintf.a has to be created at the root of your repository

## Installation and Usage

To use `ft_printf`, clone the repository and compile it:

```bash
git clone https://github.com/Neilus03/ft_printf.git
cd ft_printf
make
```
