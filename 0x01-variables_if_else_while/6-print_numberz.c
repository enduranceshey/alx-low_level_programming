#include <stdio.h>
/**
*main - Entry point
*
*Return: Already 0 (success)
*/

int main(void)
{
	int a;
	
	for (a = 0; a < 10; a++)
	{
		putchar(48 + a);
	}
	putchar('\n');
	return (0);
}

