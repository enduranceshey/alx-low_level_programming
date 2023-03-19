#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Already 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		putchar(48 + a);
		for (b = 1; b < a + 2; b++)
		{
			putchar(48 + b);
			if (b < 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

