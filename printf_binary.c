#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * printf_binar - prints binary value
 * @val: parameter
 * @word: string value
 * Return: 1
 */

int printf_binar(va_list val, char *word)
{
	unsigned int nmb, len = 0, i, num;
	char binary[33];
	(void)word;

	nmb = va_arg(val, unsigned int);
	num = nmb;

	if (nmb == 0)
	{
		printf(binary, "%u", nmb);
		write(1, binary, strlen(binary));
		return (1);
	}

	while (num > 0)
	{
		len++;
		num /= 2;
	}

	i = len - 1;
	binary[len] = '\0';

	while (nmb > 0)
	{
		binary[i] = (nmb % 2) + '0';
		nmb /= 2;
		i--;
	}
	write(1, binary, len);
	return (len);
}
