#include<stdio.h>
#include"main.h"

/**
 * print_array - prints a required number of array elements
 * @a: the given array
 * @n: the number of elements to print
 *
 * Return: void
 */
void  print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
}
