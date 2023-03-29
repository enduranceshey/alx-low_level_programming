#include"main.h"

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: integer
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, sl = 0;

	while (src[i++])
	{
		sl++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = sl; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

