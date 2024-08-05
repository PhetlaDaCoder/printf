#include "main.h"

/**
 * printf_int - prints integer value
 * @args: arguements
 * @p: pointer to flags
 * Return: printed characters
 */

int printf_int(va_list args, flag *p)
{
	int m = va_arg(args, int);
	int count = counter(m);

	if (p->space == 1 && p->plus == 0 && m >= 0)
		count += _putchar(' ');
	if (p->plus == 1 && m >= 0)
		count += _putchar('+');
	if (m <= 0)
		count++;
	printf_num(m);
	return (count);
}

/**
 * printf_unsi - prints unsigned integer
 * @n: arguements
 * @p: pointer
 * Return: total char
 */

int printf_unsi(va_list n, flag *p)
{
	unsigned int w = va_arg(n, unsigned int);
	char *str = convert(w, 10, 0);

	(void)p;
	return (_puts(str));
}

/**
 * printf_num - loop function
 * @m: printed
 */

void printf_num(int m)
{
	unsigned int m1;

	if (m < 0)
	{
		_putchar('-');
		m1 = -m;
	}
	else
		m1 = m;

	if (m1 / 10)
		printf_num(m1 / 10);
	_putchar((m1 % 10) + '0');
}

/**
 * counter - return toatl digit in intege
 * @o: integer to check
 * Return: toatal digits
 */

int counter(int o)
{
	unsigned int c = 0;
	unsigned int k;

	if (o < 0)
		k = o * -1;
	else
		k = 0;
	while (k != 0)
	{
		k /= 10;
		c++;
	}
	return (c);
}
