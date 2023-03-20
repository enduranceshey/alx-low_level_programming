#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Already 0 (success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = b + 1; d < 10; d++)
				{
					if (a <= 9 && b < 8)
					{
						putchar(48 + a);
						putchar(48 + b);
						putchar(32);
						putchar(48 + c);
						putchar(48 + d);
						if (a + b + c + d < 35)
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

