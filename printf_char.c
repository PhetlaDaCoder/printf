#include "main.h"

/**
 * printf_char - prints characters
 * @a: arguments
 * @s: pointer
 * Return: printed chars
 */

int printf_char(va_list a, flag *s)
{
	(void)s;
	_putchar(va_arg(a, int));
	return (1);
}
