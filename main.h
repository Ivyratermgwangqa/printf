#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
int pfunction_bin(va_list args);
int pfunction_str(va_list args);
int pfunction_char(va_list args);
int pfunction_int(va_list args);
int pfunction_dec(va_list args);
int _putchar(char c);
#endif
