#include "main.c"

/**
 * _strlen - returns length of string
 * @str: pointer to string
 * Return: 1 when done
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlenc - returns length of string with constant pointer
 * @str: char pointer
 * Return: 1 when done
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
