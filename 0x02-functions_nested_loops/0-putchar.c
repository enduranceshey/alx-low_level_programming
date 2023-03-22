#include<stdio.h>

int _putchar(char txt[]);

/**
 *  main - Entry point
 *
 *  Return: Already 0 (success)
 */
int main(void)
{
	_putchar("_putchar\n");
	return (0);
}
/**
 * _putchar - Printing function
 * @txt: this is the text to be printed
 *
 * Return: Already 0 (success)
 */
int _putchar(char txt[])
{
	printf("%s", txt);
	return (0);
}

