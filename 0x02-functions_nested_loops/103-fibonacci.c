#include <stdio.h>

/**
 * main - calculates and prints the sum of even fibonacci numbers
 *
 * Return: 0 success
 */
int main(void)
{
	int i = 0;

	long j = 1, k = 2, l = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
		{
			l += k;
		}
		j = k - j;
		i++;
	}
	printf("%ld\n", l);
	return (0);
}

