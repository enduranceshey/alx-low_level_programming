#include"main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: input number
 *
 * Return: 0 success
 */
int print_last_digit(int c)
{
	int d;

	d = c % 10;
	if (d < 0)
	{
		d = d * -1;
	}
	_putchar(48 + d);
	return (0);
}

