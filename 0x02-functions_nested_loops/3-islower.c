#include "main.h"

/**
 * _islower - returns 1 if the input is lowercase
 * Shows 0 otherwise
 * @c: the character in ASCII 
 *
 * Return: 1 for lowercase character. 0 otherwise
 */

int _islower(int c)
{
	if (c =97 && c <=122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
