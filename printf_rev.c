#include "main.h"

/**
 * printf_rev - prints reverse string
 * @q: arguementd
 * @w: pointer
 * Return: length of reverse string
 */

int printf_rev(va_list q, flag *w)
{
	int e = 0, k;
	char *s = va_arg(q, char *);

	(void)w;
	if (!s)
		s = "(null)";

	while (s[e])
		e++;

	for (k = e - 1; k >= 0; k--)
		_putchar(s[k]);

	return (e);
}
