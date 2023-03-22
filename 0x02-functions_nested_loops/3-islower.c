#include"main.h"

/**
 * _islower - Function determines if a character is lower case
 *@i: character to be checked(converted to ascii code)
 *
 * Return: 1 if successful else 0
 */
int _islower(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

