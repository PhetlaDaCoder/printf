#include "main.h"

/**
 * _printf - prints according to format
 * @format: chars and specifiers
 *
 * Return: formatted string
 */

int _printf(const char *format, ...)
{
	int (*pf)(va_list, flag *);
	const char *p;
	va_list arguments;
	flag flags = {0, 0, 0};

	register int count = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flag))
				p++;
			pfunc = printf_handl.c(*p);
			count += (pfunc)
				? pfunc(arguments, &flag)
				: _printf("%%%c", *p;
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(arguments);
	return (count);
}
