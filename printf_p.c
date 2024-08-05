#include "main.h"

/**
 * printf_p - prints address
 * @a: arguments
 * @s: pointer
 * Return: printed chars
 */

int printf_p(va_list a, flag *s)
{
	char *str;
	unsigned long int q = va_arg(a, unsigned long int);

	register int counter = 0;

	(void)s;

	if (!q)
		return (_puts("(nil)"));
	str = convert(q, 16, 1);
	counter += _puts("0x");
	counter += _puts(str);
	return (counter);
}
