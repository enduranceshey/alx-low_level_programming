#include<stdio.h>
#include"main.h"
/**
 * print_alphabet - displays the alphabet a to z
 *
 * Return: Already 0 (success)
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}

