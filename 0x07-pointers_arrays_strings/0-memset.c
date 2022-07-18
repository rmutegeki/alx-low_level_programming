#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by
 * s with the constant byte b
 * @s: pointer to a string
 * @b: the character to fill the buffer s with
 * @n: the number of bytes
 *
 * Return: The pointer to the address of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		*(s + count) = b;
	return (s);
}
