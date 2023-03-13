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
