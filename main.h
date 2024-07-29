#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_c(va_list args, int result);
int printf_s(va_list args, int result);
int printf_%(void);
#endif
