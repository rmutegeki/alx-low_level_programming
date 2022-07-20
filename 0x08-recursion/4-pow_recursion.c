#include "main.h"

/**
 * _pow_recursion - raising x^y
 * @x: the base -> number to raise
 * @y: the power
 *
 * Return: x raised to the power of y. -1 when y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
