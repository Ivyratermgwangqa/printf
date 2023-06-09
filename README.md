printf

GitHub

There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%

More Info

Authorized functions and macros

write (man 2 write)

malloc (man 3 malloc)

free (man 3 free)

va_start (man 3 va_start)

va_end (man 3 va_end)

va_copy (man 3 va_copy)

va_arg (man 3 va_arg)

Compilation

Your code will be compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c


As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file (main.h): #include main.h

You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:


commonly used format specifiers in C:

%d or %i: Used for printing or scanning integers.

%f: Used for printing or scanning floating-point numbers.

%c: Used for printing or scanning characters.

%s: Used for printing or scanning strings.

%p: Used for printing memory addresses.

%o: Used for printing or scanning octal numbers.

%x or %X: Used for printing or scanning hexadecimal numbers.

%u: Used for printing or scanning unsigned integers.

%ld or %li: Used for printing or scanning long integers.

%lu: Used for printing or scanning unsigned long integers.

%lld or %lli: Used for printing or scanning long long integers.

%llu: Used for printing or scanning unsigned long long integers.

0. Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);

Returns: the number of characters printed (excluding the null byte used to end output to strings)

write output to stdout, the standard output stream

format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:

c

s

%

You don’t have to reproduce the buffer handling of the C library printf function

You don’t have to handle the flag characters

You don’t have to handle field width

You don’t have to handle precision

You don’t have to handle the length modifiers

1. Handle the following conversion specifiers:

d

i

You don’t have to handle the flag characters

You don’t have to handle field width

You don’t have to handle precision

You don’t have to handle the length modifiers

2. Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary

3. Handle the following conversion specifiers:

u

o

x

X

You don’t have to handle the flag characters

You don’t have to handle field width

You don’t have to handle precision

You don’t have to handle the length modifiers

4. Use a local buffer of 1024 chars in order to call write as little as possible.

5. Handle the following custom conversion specifier:

S : prints the string.

Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

5. Handle the following conversion specifier: p.

You don’t have to handle the flag characters

You don’t have to handle field width

You don’t have to handle precision

You don’t have to handle the length modifiers

6. Handle the following flag characters for non-custom conversion specifiers:

+

s

pace

#

8. Handle the following length modifiers for non-custom conversion specifiers:

l

h

Conversion specifiers to handle: d, i, u, o, x, X 

9. Handle the field width for non-custom conversion specifiers.

10. Handle the precision for non-custom conversion specifiers.

11. Handle the 0 flag character for non-custom conversion specifiers.

12. Handle the - flag character for non-custom conversion specifiers.

13. Handle the following custom conversion specifier:

r : prints the reversed string

14. Handle the following custom conversion specifier:

R: prints the rot13'ed string

15. All the above options work well together.


