#include"main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to char
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0, i = 0;

	char a;

	while (s[i++])
	{
		l++;
	}
	for (i = l - 1; i >= l / 2; i--)
	{
		a = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = a;
	}
}

