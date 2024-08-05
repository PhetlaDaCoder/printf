#include "main.h"

/**
 * printf_handl - selects printing functions
 * @a: holds conversion specofier
 *
 * Return: pointer matching function
 */

int (*printf_handl(char a))(va_list, flag *)
{
	ph _array[] = {
		{'i', printf_int},
		{'s', printf_str},
		{'c', printf_char},
		{'d', printf_int},
		{'x', printf_hex},
		{'X', printf_HEX},
		{'b', printf_bin},
		{'o', printf_oct},
		{'R', printf_rot13},
		{'r', printf_rev},
		{'S', printf_S},
		{'%', printf_37}
	};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (_array[i].c == a)
			return (_array[i].f);
	return (NULL);
}
