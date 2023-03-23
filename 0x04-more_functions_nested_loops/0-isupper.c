#include "main.h"
/**
 * _isupper - determines if c is upper case
 * @c: character to be checked
 *
 * Return: 1 if success else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

