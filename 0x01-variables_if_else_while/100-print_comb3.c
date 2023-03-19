#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Already 0 (success)
 */
int main(void)
{
	int a = 0;

	int b;

	do
	{
		for (b = a + 1; b < 10; b++)
		{
			if (b != a)
			{
				putchar(48 + a);
				putchar(48 + b);
				if (b < 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		a++;
	}
	while (a < 10);
	putchar('\n');
	return (0);
}

