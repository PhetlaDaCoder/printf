#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * printf_inte - prints integers
 * @val: va_list
 * @args: string
 *
 * Return: length
 */

int printf_inte(va_list  val, char *args)
{
	long int num, len = 0;
	char st[20];
	(void)args;

	num = va_arg(val, long int);
	if (*args == 'l')
		printf(st, "%ld", num);
	else if (*args == 'h')
		printf(st, "%hd", num);
	else
		printf(st, "%d", num);
	handle_args(args, st);
	len = strlen(st);

	write(1, st, len);
	return (len);
}



/**
 * printf_deci - prints decimals
 * @val: va_list
 * @args: string value
 * Return: length
 *
 */

int printf_deci(va_list val, char *args)
{
	long int num, len = 0;
	char st[20];
	(void)args;

	num = va_arg(val, long int);
	if (*args == 'l')
		printf(st, "%ld", num);
	else if (*args == 'h')
		printf(st, "%hd", num);
	else
		printf(st, "%d", num);
	handle_args(args, str);
	len = strlen(st);
	write(1, st, len);
	return (len);
}
