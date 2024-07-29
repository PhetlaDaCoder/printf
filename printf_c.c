#include "main.h"

/**
 * printf_c - prints characters
 * @args: taken arguments
 * Return: 1
 */

int printf_c(va_list args)
{
	char str;

	str = va_arg(args, int);
	_putchar(str);
	return (1);
}
