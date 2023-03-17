#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n%10;/*This gives me the last digit of n*/
	if (b > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n" ,n,b);
	}
	else if (b = 0)
	{
		printf("The last digit of %d is %d and is 0\n");
	}
	else if (b < 6 && b != 0)
	{
		printf("The last digit of %d is %d and is lass than 6 and not 0\n");
	}
	return (0);
}
