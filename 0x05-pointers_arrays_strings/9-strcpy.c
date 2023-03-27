#include"math.h"

/**
 * _strcpy - copies a string to a buffer
 * @dest: destination(a buffer)
 * @src: string to be copied
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

