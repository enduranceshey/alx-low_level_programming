#include"main.h"

/**
 * print_numbers - prints digits from 1 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(48 + i);
	}
	_putchar('\n');
}

