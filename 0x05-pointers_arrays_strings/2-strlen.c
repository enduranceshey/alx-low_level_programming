#include"main.h"

/**
 * _strlen - evaluates the length of a string
 * @s: pointer to the given string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}
	return (l);
}

