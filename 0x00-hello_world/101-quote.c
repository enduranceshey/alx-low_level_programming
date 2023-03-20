#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Already 1 (sucess)
 */
int main(void)
{
	int i;

	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (i = 0; i <= 57; i++)
	{
		putchar(quote[i]);
	}
	putchar('\n');
	return (1);
}

