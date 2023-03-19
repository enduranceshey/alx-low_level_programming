#include <stdio.h>
/**
*main - Entry point
*
*Return: Already 0 (success)
*/

int main(void)
{
	char a;
	
	for (a = 'z'; a > 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

