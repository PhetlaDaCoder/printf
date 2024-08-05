#include "main.h"

/**
 * printf_oct - prints octal value
 * @a: arguements
 * @s: pointer
 * Return: chars printed
 */

int printf_oct(va_list a, flag *s)
{
	unsigned int nmb = va_arg(a, unsigned int);
	char *str = convert(nmb, 8, 0);
	int counter = 0;

	if (s->hash == 1 && str[0] != '0')
		counter += _putchar('0');
	counter += _puts(str);
	return (counter);
}
