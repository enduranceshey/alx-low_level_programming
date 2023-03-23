#include "main.h"

/**
 * _isdigit - checks if c is a digit between 0 and 9
 * @c: character to check
 *
 * Return: 1 if succes else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

