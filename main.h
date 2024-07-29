#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_c(va_list args);
int printf_s(va_list args);
int printf_37(void);
int _strlen(char *str);
int _strlenc(const char *str);

#endif
