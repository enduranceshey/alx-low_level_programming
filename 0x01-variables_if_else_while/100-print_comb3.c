#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Already 0 (success)
 */
int main(void)
{
	int a, b = 0;

	for (a = 0; a < 10; a++)
	{
		putchar(48 + a);
		putchar(48 + b++);
		if (b < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}

