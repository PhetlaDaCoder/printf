#include "main.h"

/**
 * printf_o - prints octal value
 * @val: arguments
 * Return: counter
 */

int printf_o(va_list val)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 8;
		tem /= 8;
	}
	free(array);
	return (counter);
}
