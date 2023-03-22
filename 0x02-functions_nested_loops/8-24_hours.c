#include"main.h"

/**
 * jack_bauer - prints the hours of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d, e = 9;

	for (a = 0; a <= 2; a++)
	{
		if (a == 2)
		{
			e = 3;
		}
		for (b = 0; b <= e; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar(48 + a);
					_putchar(48 + b);
					_putchar(58);
					_putchar(48 + c);
					_putchar(48 + d);
					_putchar('\n');
				}
			}
		}
	}
}

