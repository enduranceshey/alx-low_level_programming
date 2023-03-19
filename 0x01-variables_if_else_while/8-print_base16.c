#include <stdio.h>

/**
 *
 *  main - Entry point
 *
 *  Return: Already 0 (success)
 */
int main(void)
{
	int a;

	char b;

	for (a = 0; a < 10; a++)
	{
		putchar(a);
		if (a == 9)
		{
			for (b = 'a'; b <= 'f'; b++)
			{
				putchar(b);
			}
		}
	}
	putchar('\n');
	return (0);
}

