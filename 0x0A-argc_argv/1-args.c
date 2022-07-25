#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of commandline arguments.
 * @argv: array of commandline argu ments.
 *
 * Return: 0 - suscess.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
