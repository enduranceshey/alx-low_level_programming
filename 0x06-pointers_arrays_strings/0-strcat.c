#include"main.h"

/**
 * _strcat - combines two strings together
 * @dest: string to which the second will be added
 * @src: string to be added
 *
 * Return: combined string
 */
char _strcat(char *dest, char *src)
{
	int i = 0, dl = 0;

	while (dest[i++])
	{
		dl++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dl++] = src[i];
	}
	return (dest);
}

