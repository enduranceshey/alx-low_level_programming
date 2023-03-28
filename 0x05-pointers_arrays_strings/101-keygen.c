#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - generates a random password
 *
 * Return: Always 0
 */
int main(void)
{
	char pass[84];

	int i = 0, j = 0, k, l;

	srand(time(0));
	while (j < 2772)
	{
		pass[i] = 33 + rand() % 94;
		j += pass[i++];
	}
	pass[i] = '\0';
	if (j != 2772)
	{
		k = (j - 2772) / 2;
		l = (j - 2772) / 2;
		if ((j - 2772) % 2 != 0)
		{
			k++;
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + k))
			{
				pass[i] -= k;
				break;
			}
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + l))
			{
				pass[i] -= l;
				break;
			}
		}
	}
	printf("%s", pass);
	return (0);
}

