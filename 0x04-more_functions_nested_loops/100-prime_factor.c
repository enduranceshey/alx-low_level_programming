#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Already 0 (success)
 */
int main(void)
{
	long a, max;

	long num = 612852475143;

	double sqroot = sqrt(num);

	for (a = 1; a <= sqroot; a++)
	{
		if (num % a == 0)
		{
			max = num / a;
		}
	}
	printf("%ld\n", max);
	return (0);
}

