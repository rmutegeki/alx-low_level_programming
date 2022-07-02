#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit nos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a, b, c, d, option1, option2;

for (a = 48; a < 58; a++)
{
	for (b = 48; b < 58; b++)
	{
		for (c = 48; c < 58; c++)
		{
			for (d = 48; d < 58; d++)
			{
				option1 = (a * 10) + b;
				option2 = (c * 10) + d;
				if (option1 < option2)
				{
					putchar (a);
					putchar (b);
					putchar (' ');
					putchar (c);
					putchar (d);
					if (a == 57 && b == 56 && c == 57 && d == 57)
						break;
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
}

putchar ('\n');
return (0);
}
