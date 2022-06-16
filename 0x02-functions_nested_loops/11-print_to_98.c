#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 *
 * @n: first integer
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i = 0;

	if (n < 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				printf(",");
			}

			printf(%d, i);
		}
	}

	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
			{
				printf(",");
			}

			printf(%d, i);
		}
	}
	putchar('\n');
}
