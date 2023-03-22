#include"main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a = 1;

	char i;

	do
	{
		for (i = 'a'; i < 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}while (a < 10);
}

