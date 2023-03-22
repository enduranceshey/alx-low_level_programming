#include"main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	char e;

	do {
		for (e = 'e'; e <= 'z'; e++)
		{
			_putchar(e);
		}
		_putchar('\n');
		i++;
	} while (e < 9);
}

