#include "main.h"

/**
 * get_flag - checks for flags
 * @a: flag specifier
 * @p: pointer
 *
 * Return: 1 if flag , o otherwise
 */

int get_flag(char a, flag *p)
{
	int m = 0;

	switch (a)
	{
		case '+':
			p->plus = 1;
			m = 1;
			break;
		case ' ':
			p->space = 1;
			m = 1;
			break;
		case '#':
			p->hash = 1;
			m = 1;
			break;
	}

	return (m);
}
