#include "main.h"

/**
 * printf_p - prints hec number
 * @val: arguments
 * Return: counter
 */

int printf_p(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
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

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = printf_hex_b(x);
	return (y + 2);
}
