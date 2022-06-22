#include "main.h"
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_recursive(2, n, n));
}

/**
 * sqrt_recursive - calculates square root recursively
 * @i: First number
 * @j: Last number
 * @k: given number
 * Return: -1 if sqrt not found
 */

int sqrt_recursive(int i, int j, int k)
{
	long mid;

	if (j >= i)
	{
		mid = i + (j - i) / 2;
		if (mid * mid == k)
			return (mid);
		if (mid * mid > k)
			return (sqrt_recursive(i, mid - 1, k));
		if (mid * mid < k)
			return (sqrt_recursive(mid + 1, j, k));
	}
	return (-1);
}
