#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * separated by , folowed by a space
 * Print only the smallest combinations, in ascending order
 * 01 and 10 considered the same combination
 *
 * Return: Always 0
 */
int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			/*don't add ',' and space when at 89*/
 			if (digit1 == 8 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
}
