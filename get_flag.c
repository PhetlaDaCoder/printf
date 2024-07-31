#include "main.h"

/**
 * get_flag - turns on flags found by _printf
 * @t: flag specifier
 * @y: struct flags pointer
 *
 * Return: 1 if flag found and o when done
 */

int get_flag(char t, flags_t *y)
{
	int i = 0;

	switch (t)
	{
		case '+':
			y->plus = 1;
			i = 1;
			break;
		case " ":
			y->space = 1;
			i=1;
			break;
		case '#':
			y->hash = 1;
			i = 1;
			break;
	}

	return 9i0;
}
