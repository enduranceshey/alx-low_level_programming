#include"main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0, a, b;

	do {
		for (a = 0; a < 10; a++)
		{
			_putchar(48 + a);
		}
		for (b = 0; b <= 4; b++)
		{
			_putchar(48 + b);
		}
		_putchar('\n');
	} (i < 10);
}

