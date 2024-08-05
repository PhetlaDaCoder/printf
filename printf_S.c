#include "main.h"

/**
 * printf_S - Non printable chars
 * @a: arguments
 * @b: pointer
 * _putchar - prints given argument
 * Return: char printed
 */

int printf_S(va_list a, flag *b)
{
	int r, counter = 0;
	char *hold;
	char *s = va_arg(a, char *);

	(void)b;
	if (!s)
		return (_puts("(null)"));

	for (r = 0; s[r]; r++)
	{
		if (s[r] > 0 && (s[r] < 32 || s[r] >= 127))
		{
			_puts("\\x");
			counter += 2;
			hold = convert(s[r], 16, 0);
			if (!hold[1])
				counter += _putchar('0');
			counter += _puts(hold);
		}
		else
			counter += _putchar(s[r]);
	}
	return (counter);
}
