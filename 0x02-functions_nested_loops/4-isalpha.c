#include "main.h"

/**
 * _isalpha - checks whether a character is alphanumeric
 *
 * @c: an int representing the ASCII code for the character
 *
 * Return: 1 if c is a letter and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 91)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
