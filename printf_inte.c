#include "main.h"

/**
 * printf_inte - prints integers
 * @args: given arguments
 *
 * Return: total characters
 */

int printf_inte(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int i = i;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}



/**
 * printf_deci - prints decimals
 * @args: given arguments
 * Return: printed character
 *
 */

int printf_deci(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int i = i;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
