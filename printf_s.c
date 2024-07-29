#include "main.h"

/**
 * printf_s - prints the string
 * @args: given arguments
 * @_strlen: string length
 * Return: length
 */

int printf_s(va_list args)
{
	char *str;
	int i;
	int length;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
