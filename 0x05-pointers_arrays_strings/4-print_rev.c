#include"main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0, i;

	while (*s++)
	{
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

