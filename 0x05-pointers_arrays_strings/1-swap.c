#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: a pointer to first integer
 * @b: a pointer to second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int *tmp;
	
	*tmp = *a;
	*a = *b;
	*b = *tmp
}
