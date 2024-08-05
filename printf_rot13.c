#include "main.h"

/**
 * printf_rot13 - prints rot13
 * _putchar: prints argument
 * @a: arguments
 * @m: pointer
 * Return: length of string
 */

int printf_rot13(va_list a, flag *m)
{
	int r, t;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"
	char *s = va_arg(a, char *);


	(void)m;
	for (t = 0; r[t]; t++)
	{
		if (s[t] < 'A' || (s[t] > 'Z' && s[t]< 'a') || s[t] > 'z')
			_putchar(s[t]);
		else
		{
			for (r = 0; r <= 52; r++)
			{
				if (s[t] == rot13[r])
					_putchar(ROT13[r]);
			}
		}
	}
	return (t);
}

