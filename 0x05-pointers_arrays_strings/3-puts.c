#include"main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i, l = 0;

	i = _strlen(str);
	while (l <= i)
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}

