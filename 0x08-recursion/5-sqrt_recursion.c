#include "main.h"


/**
 * _power - returns a number which when squared equals n
 * @n: the number we are looking for
 * @guess: the posibble squareroot
 *
 * Return: the squareroot of n or -1
 */

int _power(int n, int guess)
{
	if (guess % (n / guess) == 0)
	{
		if (guess * (n / guess) == n)
			return (guess);
		else
			return (-1);
	}
	return (_power(n, guess + 1));
}


/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number
 *
 * Return: squareroot of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (_power(n, 2));
}
