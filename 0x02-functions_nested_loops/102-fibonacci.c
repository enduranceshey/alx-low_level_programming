#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int i, a, fab;

	for (i = 1; i < 100; i++)
	{
		if (i > 2)
		{
			printf("%d, ", a + i);
		}
		else
		{
			printf("%d, ", i);
		}
		a = i;
	}
	putchar('\n');
}

