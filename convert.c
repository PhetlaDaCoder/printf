#include "main.c"

/**
 * convert - converts number and bas e to string
 * @num: number
 * @base: base
 * @lowercase: lowercase values
 * Return: return string value
 */

char *convert(unsigned long int num, int base, int lowercase)
{
	static char *hold;
	static char buffer[50];
	char *ptr;

	hold = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = hold[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
