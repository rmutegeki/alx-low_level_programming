#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lower case using putchar.
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar (ch);
	}

	for (ch = 97; ch < 103; ch++)
	{
		putchar (ch);
	}

	putchar ('\n');
	return (0);
}
