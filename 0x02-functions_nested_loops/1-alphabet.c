#include<stdio.h>

/**
 * main Entry - point
 *
 * Return: Already 0 (success)
 */
int main(void)
{
	int alph;

	for (alph = 'a'; alph < 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
