#include "main.h"

/**
 * printf_S - prints special string
 * @val: parameter
 * Return: interger
 */

int printf_S(va_list val)
{
	char *s;
	int i, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + printf_HEX(value);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}
