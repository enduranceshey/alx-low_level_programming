#include"main.h"

/**
 * print_line - draw a line in the terminal
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	while (i <= n)
	{
		_putchar(45);
		i++;
	}
}

