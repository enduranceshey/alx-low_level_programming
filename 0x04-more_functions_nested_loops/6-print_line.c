#include"main.h"

/**
 * print_line - draw a line in the terminal
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}

