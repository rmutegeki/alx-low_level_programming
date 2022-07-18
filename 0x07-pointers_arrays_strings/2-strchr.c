#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a string of characters
 * @c: the character to be located
 *
 * Return: the location of the charater c or NULL when c not in s
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if (*(s + count) == c)
			return (s + count);
		count++;
	}

	return (s);
}
