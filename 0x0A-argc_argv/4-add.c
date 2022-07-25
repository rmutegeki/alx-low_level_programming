#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of commandline arguments.
 * @argv: contains the commandline arguments.
 *
 * Return: 0 - success, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	if (argc <= 1)
		printf("0\n");
	else
	{
		int i, sum = 0;

		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
