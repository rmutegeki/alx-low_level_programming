#include "main.h"

/**
 * divisible - checks if a number is divisible by a number
 * greater than 2 and less than n/2
 * @n: the number
 * @guess: the number we think can divide n without a remainder
 *
 * Return: 0 when n is divisible by guess, 1 when no divisor.
 */

int divisible(int n, int guess)
{
	if (guess > n / 2)
		return (1);
	else if (n % guess == 0)
		return (0);
	else
		return (divisible(n, guess + 1));
}

/**
 * is_prime_number - Check whether an int is prime
 * @n: an integer
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n < 2)
		return (0);
	return (divisible(n, 2));
}
