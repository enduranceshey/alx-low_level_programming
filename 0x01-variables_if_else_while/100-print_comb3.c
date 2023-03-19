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
		for (b = a + 1; b < 10; b++)
		{
			putchar(48 + a);
			putchar(48 + b);
			if (a < 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

