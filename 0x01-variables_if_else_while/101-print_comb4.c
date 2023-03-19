#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Already 0 (success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(48 + a);
				putchar(48 + b);
				putchar(48 + c);
				if (a < 7 || b < 8 || c < 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

