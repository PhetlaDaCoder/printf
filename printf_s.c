#include "main.h"

/**
 * printf_s - prints the string
 * @args: given arguments
 * @result: characters printed
 * Return: printed characters
 */

int printf_s(va_list args, int result)
{
	char *string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		result++;
		string++;
	}
	return (result);
}
