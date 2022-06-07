/* Author: Barack Walindi */

#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * separated by',' followed by a space
 * It prints only the smallest combinations
 *
 * Return: Always 0
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = 1; digit2 < 9; digit2++)
		{
			for (digit3 = 2; digit3 <= 9; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
