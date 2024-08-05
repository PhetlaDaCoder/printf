#ifndef MAIN_h
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - contains flags
 * @plus: flag for '+'
 * @space: flag fpr ' '
 * @hash: flag for '#'
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flag;

/**
 * struct printHandler - choose right function
 * @c: format
 * @f: pointer
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flag *f);
} ph;

int _printf(const char *format, ...);
int printf_int(va_list args, flag *p);
int printf_unsi(va_list n, flag *p);
void printf_num(int m);
int counter(int o);
void printf_num(int m);
int printf_S(va_list a, flag *b);
int printf_rev(va_list q, flag *w);
int printf_rot13(va_list a, flag *m);
int printf_37(va_list a, flag *b);
int printf_hex(va_list q, flag *w);
int printf_HEX(va_list q, flag *w);
int printf_bin(va_list a, flag *s);
int printf_oct(va_list a, flag *s);
int printf_str(va_list a, flag *p);
int printf_char(va_list a, flag *s);
int printf_p(va_list a, flag *s);
char *convert(unsigned long int num, int base, int lowercase);
int _puts(char *str);
int get_flag(char a, flag *p);
int (*printf_handl(char a))(va_list, flag *);

#endif
