#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the size to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		*(dest + count) = *(src + count);

	return (dest);
}
