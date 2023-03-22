#include"main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: integer whose absolute value will be computed
 *
 * Return: 0 exit value
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else
	{
		return (-1 * c);
	}
	return (0);
}

