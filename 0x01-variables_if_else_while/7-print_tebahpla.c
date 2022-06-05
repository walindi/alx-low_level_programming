#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * followed by a new line
 * without using printf
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
