#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Already 0 (success)
 */
int main(void)
{
	int a, b;

	do
	{
		for (b = 0; b < a + 2; b++)
		{
			if (b != a)
			{
				putchar(48 + a);
				putchar(48 + b);
			}
			if (b < 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}while (a < 10);
	putchar('\n');
	return (0);
}

