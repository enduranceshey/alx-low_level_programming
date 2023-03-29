#include"main.h"

/**
 * _strncat - cancatenates two strings
 * with respect to an inputed number of bytes
 * @dest: final string
 * @src: string to to be cat
 * @n: number of bytes
 *
 * Return: cocatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dl = 0;

	while (dest[i++])
	{
		dl++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dl++] = src[i];
	}
	return (dest);
}

