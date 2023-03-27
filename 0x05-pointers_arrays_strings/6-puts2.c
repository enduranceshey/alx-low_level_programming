#include"main.h"

/**
 * puts2 - prints characters of a string
 * @str: string of characters
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, l = 0;

	while (str[i++])
	{
		l++;
	}
	for  (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

