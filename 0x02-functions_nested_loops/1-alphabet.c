#include<stdio.h>
#include"main.h"
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
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}
