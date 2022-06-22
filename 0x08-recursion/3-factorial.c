#include "main.h"
/**
 * factorial - prints the factorial of a number
 * @n: The number to be printed
 * Return: Returns the factorial of the inputted number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
