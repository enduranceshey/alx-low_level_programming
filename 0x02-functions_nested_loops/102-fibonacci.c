#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int i, a;

	for (i = 1; i < 25; i++)
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
	return (0);
}

