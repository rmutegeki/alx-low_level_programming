#include <stdio.h>

/**
 * main - Prints the aphabet in lower and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
