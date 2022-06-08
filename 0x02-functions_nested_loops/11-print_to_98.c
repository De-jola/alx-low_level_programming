#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - prints natural numbers from 0 to 98
 * @n: number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
