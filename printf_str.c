#include "main.h"

/**
 * printf_str- prints string characters
 * @a: arguments
 * @p: pointer
 * Return: printed chars
 */

int printf_str(va_list a, flag *p)
{
	char *s = va_arg(a, char *);

	(void)p;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

