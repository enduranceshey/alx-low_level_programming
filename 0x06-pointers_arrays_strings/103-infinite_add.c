#include"main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - adds the numerical content of two strings
 * @n1: string containing 1st number
 * @n2: string containing 2nd number
 * @r: buffer to which result will be stored
 * @r_index: current index of the buffer
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int n, t = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		n = (*n1 - '0') + (*n2 - '0');
		n += t;
		*(r + r_index) = (n % 10) + '0';
		t = n / 10;
	}
	for (; *n1; n1--, r_index--)
	{
		n = (*n1 - '0');
		*(r + r_index) = (n % 10) + '0';
		t = n / 10;
	}
	for (; *n2; n2--, r_index--)
	{
		n = (*n2 - '0') + t;
		*(r + r_index) = (n % 10) + '0';
		t = n / 10;
	}
	if (t && r_index >= 0)
	{
		*(r + r_index) = (t % 10) + '0';
		return (r + r_index);
	}
	else if (t && r_index < 0)
	{
		return (0);
	}
	return (r + r_index + 1);
}

/**
 * infinit_add - Adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1l = 0, n2l = 0;

	for (i = 0; *(n1 + i); i++)
	{
		n1l++;
	}
	for (i = 0; *(n2 + i); i++)
	{
		n2l++;
	}
	if (size_r <= n1l + 1 || size_r <= n2l + 1)
	{
		return (0);
	}
	n1 += n1l - 1;
	n2 += n2l - 1;
	*(r + size_r) = '\0';
	return (add_strings(n1, n2, r, --size_r));
}

