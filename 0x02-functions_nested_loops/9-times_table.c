#include "main.h"

/**
 * times_table - prints the 9 times table
 * starting with 0
 *
 * Return: Always 0
 */

void times_table(void)
{
	int x;
	int y;
	int multiple;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			multiple = x * y;

			if (x == 0)
			{
				_putchar(mtiple + '0');
			}

			else if (multiple >= 10)
			{
				_putchar(' ');
				_putchar(multiple / 10 + '0');
				_putchar(multiple % 10 + '0');
			}

			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multiple + '0');
			}

			if (x != 9)
			{
				_putchar(',');
			}

		}

		_putchar('\n');
	}
}
