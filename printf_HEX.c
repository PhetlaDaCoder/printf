#include "main.h"
#include <stdarg.h>


/**
 *
 * printf_HEX - prints a hexadecimal
 * @q: arguments
 * @w:pointer
 * Return: hexadecimals
 */

int printf_HEX(va_list q, flag *w)
{
	unsigned int nmb = va_arg(q, unsigned int);
	char *str = convert(nmb, 16, 1);
	int counter = 0;

	if (w->hash == 1 && str[0] != '0')
		counter += _puts("0x");
	counter += _puts(str);
	return (counter);
}
