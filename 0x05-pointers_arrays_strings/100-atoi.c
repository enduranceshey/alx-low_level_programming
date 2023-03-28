#include"main.h"

/**
 * _atoi - converts string to integer
 * @s: given string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int k = 1;

	unsigned int n = 0;

	do {
		if (*s == '-')
		{
			k *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}
	} while (*s++);
	return (n * k);
}

