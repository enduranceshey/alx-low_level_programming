#include"main.h"
#include<stdio.h>

/**
 * print_to_98 - prints integers from n to 98
 * @n: starting point
 *
 * Return: 0 success
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(44);
				_putchar(32)
			}
		}
		_putchar('\n');
	}
}

