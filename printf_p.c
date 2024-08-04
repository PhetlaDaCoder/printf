#include "main.h"

/**
 * printf_p - prints hec number
 * @val: va_list
 *
 * Return: address
 */

int printf_p(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a =(unsigned long int)p;
	_putchar('o');
	_putchar('x');
	b = printf_hex_b.c(a);
	return (b + 2);
}
