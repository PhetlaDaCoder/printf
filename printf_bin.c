#include "main.h"

/**
 * printf_bin - prints binary
 * @a: arguments
 * @s: pointer
 * Return: total char printed
 */

int printf_bin(va_list a, flag *s)
{
	unsigned int nmb = va_arg(a, unsigned int);
	char *str = convert(nmb, 2, 0);

	(void)s;
	return (_puts(str));
}
