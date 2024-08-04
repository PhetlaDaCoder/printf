#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct format - converter for printf
 * @ph: char type pointer
 * @f:  function for conversion
 */

typedef struct format
{
	char *ph;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_c(va_list args);
int printf_s(va_list args);
int printf_37(void);
int _strlen(char *str);
int _strlenc(const char *str);
int printf_inte(va_list  val, char *flags);
int printf_deci(va_list val, char * flags;
int printf_binar(va_list val, char *word);
int printf_o(va_list val);
int printf_unsigned(va_list args);
int printf_hex(va_list val);
int printf_HEX(unsigned long int num);
int printf_S(va_list val);
int printf_hex_b(unsigned long int num);
int printf_HEX_b(unsigned int num);
int printf_p(va_list val, char *word);
int printf_rev(va_list args);
int printf_rot13(va_list args);

#endif
