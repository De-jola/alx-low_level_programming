#include "main.h"
/**
 * _abs - returns the absolute value of any number
 * @n: the number to be checked
 *
 * Return: Returns the absolute value of the number
 */
int _abs(int n)
{
	int c;

	if (-n)
	{
		c = -1;
		n *= c;
		return (n);
	}

	else
	{
		c = 1;
		n *= c;
		return (n);
	}
}
