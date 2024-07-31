#include "main.h"

/**
 * _printf - function that selects functions
 * @format: identifier
 * Return: string length
 */
int _printf(const char * const format, ...)
{
	convert_match p[] = {
		{"%s", printf_S}, {"%c", printf_c},
		{"%%", printf_37},
		{"%i", printf_inte}, {"%d", printf_deci}, {"%r", printf_rev},
		{"%R", printf_rot13}, {"%b", printf_binar},
		{"%u", printf_unsigned},
		{"%o", printf_o}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_S}, {"%p", printf_p}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '&' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				len += p[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
