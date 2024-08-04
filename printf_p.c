#include "main.h"

/**
 * printf_p - prints hec number
 * @val: va_list
 * @word: string
 *
 * Return: length
 */

int printf_p(va_list val, char *word)
{
	void *p = va_arg(val, void *);
	char str[30];
	int len = 0;
	(void)word;

	sprintf(str, p);
	len += write(1, str, strlen(str));
	return (len);
}
