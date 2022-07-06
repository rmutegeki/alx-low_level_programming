#include "main.h"

/**
 * main - prints _putchar and a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char text[] = "_putchar";
	int size = (sizeof(text) - 1) / sizeof(char);
	int i;

	for (i = 0; i < size; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
