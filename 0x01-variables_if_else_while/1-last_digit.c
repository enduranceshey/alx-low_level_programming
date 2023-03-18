#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Already 0 (success)
*/

int main(void)
{
	int n;

	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;/*This gives me the last digit of n*/
	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	else if (b == 0)
		printf("Last digit of %d is %d and is 0\n", n, b);
	else if (b < 6 && b != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
	return (0);
}

