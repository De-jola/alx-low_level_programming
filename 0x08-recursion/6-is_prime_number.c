#include "main.h"
/**
 * is_prime_number - checks if a number is a prime number
 * @n: The integer to be examined
 * Return: 1 or 0 if the integer is a prime number or not respectively
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_prime_number(2, n));
}

/**
 * _prime_number - checks to see if number is prime
 * @i: check
 * @j: integer
 *
 * Return: 1 if prime, 0 if not.
 */
int _prime_number(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	if (i > j / 2)
		return (1);
	else
		return (_prime_number(i + 1, j));
}
