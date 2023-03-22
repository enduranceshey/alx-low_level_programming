#include"main.h"

/**
 * print_sign - determines the sign of a number
 * @n: number whose sign will be determined
 *
 * Return: 1 if number is positive 0 if its zero and -1 if its less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (-1);
}

