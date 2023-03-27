#include"main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}
	while (l + 1 >= 0)
	{
		_putchar(*s--);
		l--;
	}
	_putchar('\n');
}

