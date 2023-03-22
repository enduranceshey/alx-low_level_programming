#include"main.h"

/**
 * print_times_table - prints the multiplication times table
 * @n: the highest value on the time table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, c, d, e;

	if (n > 15 || n < 0)
	{
	}
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (c > n)
			{
				d = c % 10;
				e = (c - d) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(e + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}

