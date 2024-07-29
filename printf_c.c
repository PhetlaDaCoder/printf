#include "main.h"

/**
 * printf_c - prints characters
 * @args: taken arguments
 * @result: characters to be printed
 * Return:  printed characters
 */

int printf_c(va_list args, int result)
{
	int character = va_args(args, int);

	_putchar(character);
	return (result + 1);
}
