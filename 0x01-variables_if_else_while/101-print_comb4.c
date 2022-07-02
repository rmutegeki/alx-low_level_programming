#include <stdio.h>

/**
 * main - Prints all possible different combinations of 3 digits searated by ,
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				if (a != b && a != c && b != c && a < b && b < c)
				{
					putchar (a);
					putchar (b);
					putchar (c);
					if (c == 57 && b == 56 && a == 55)
					{
						break;
					}
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
