#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int i;

	long j = 1, k = 2;

	for (i = 0; i  <= 97; i++)
	{
		if (i == 0)
		{
			printf("%ld", j);
		}
		else if (i == 1)
		{
			printf(", %ld", k);
		}
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
	}
	putchar('\n');
	return (0);
}

