#include"main.h"

/**
 *  main - Entry point
 *
 *  Return: Already 0 (success)
 */
int main(void)
{
	char txt[] = "_putchar";

	int a = sizeof(txt) / sizeof(txt[0]);

	int i;

	for (i = 0; i <= a - 1; i++)
	{
		_putchar(txt[i]);
	}
	return (0);
}

