#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: input array
 * @n: number of elements
 * Return: no return
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + 1));

		if (i != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
