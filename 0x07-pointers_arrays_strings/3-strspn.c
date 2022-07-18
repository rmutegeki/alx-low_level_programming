#include "main.h"

/**
 * _strspn - gets the length of a prefix sub string
 * @s: the string to check
 * @accept: the substring that we are looking for
 *
 * Return: the length of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, bool;

	while (*(s + i) != '\0')
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		if (bool == 1)
			break;
		i++;
	}

	return (i);
}
