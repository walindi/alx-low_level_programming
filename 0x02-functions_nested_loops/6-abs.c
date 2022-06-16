#include "main.h"

/**
 * _abs - returns absolute value of an int
 *
 * @n: integer from which to get absolute value
 *
 * Return: Always 0
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n);
	}

	return (0);

}
