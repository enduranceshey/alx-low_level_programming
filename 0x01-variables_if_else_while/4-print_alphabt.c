#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Already 0 (success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e')
		{
			if (a != 'q')
			{
				putchar(a);
			}
		}
	}
	putchar('\n');
	return (0);
}

