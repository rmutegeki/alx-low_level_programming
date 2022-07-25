#include <stdio.h>

/**
 * main - prints its name with a new line.
 * @argc: number of command line arguments (size of argv).
 * @argv: array of command line arguments.
 *
 * Return: 0 - success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
