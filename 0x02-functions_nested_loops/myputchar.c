#include"main.h"
#include<unistd.h>

/**
 * _putchar - Prints text
 * @txt: the input text
 *
 * Return: On success 1.
 */
int _putchar(char txt)
{
	return (write(1,&txt,1));
}

