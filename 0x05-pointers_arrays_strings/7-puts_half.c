#include"main.h"


/**
 * puts_half - prints half of a string
 * @str: string of characters
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, l = 0, a;

	while (str[i++])
	{
		l++;
	}
	if ((l % 2) == 0)
	{
		a = l % 2;
	}
	else
	{
		a = (l + 1) / 2;
	}
	for (i = a; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

