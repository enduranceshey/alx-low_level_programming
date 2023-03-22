#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		a = i % 3;
		b = i % 5;
		if (a == 0 || b == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

