#include <stdio.h>

/**
 * main - Prints all possible combinations of 2 digits.
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int n;
	int m;

	for  (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			if (n != m && n < m)
			{
				putchar (n);
				putchar (m);
				if (m == 57 && n == 56)
				{
					break;
				}
				putchar (',');
				putchar (' ');
			}
		}
	}

	putchar ('\n');
	return (0);
}
