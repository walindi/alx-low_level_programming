#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit
 * numbers in ascending order, using putchar
 * separated by , and followed by a space
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');

		/*skip putchar(',') and putchar(' ')
		 * when n is 9
		 */

		if (n == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
