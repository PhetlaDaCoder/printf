#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * printf_inte - prints integers
 * @val: va_list
 * @flags: string
 *
 * Return: length
 */

int printf_inte(va_list  val, char *flags)
{
	long int num, len = 0;
	char st[20];
	(void)flags;

	num = va_arg(val, long int);
	if (*flags == 'l')
		printf(st, "%ld", num);
	else if (*flags == 'h')
		printf(st, "%hd", num);
	else
		printf(st, "%d", num);
	handle_flags(flags, st);
	len = strlen(st);

	write(1, st, len);
	return (len);
}



/**
 * printf_deci - prints decimals
 * @val: va_list
 * @flags: string value
 * Return: length
 *
 */

int printf_deci(va_list val, char *flags)
{
	long int num, len = 0;
	char st[20];
	(void)flags;

	num = va_arg(val, long int);
	if (*flags == 'l')
		printf(st, "%ld", num);
	else if (*flags == 'h')
		printf(st, "%hd", num);
	else
		printf(st, "%d", num);
	handle_flags(flags, str);
	len = strlen(st);
	write(1, st, len);
	return (len);
}
