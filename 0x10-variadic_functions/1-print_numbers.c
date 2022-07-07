#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints out numbers given
 * @seperator: String to be seperated between between numbers
 * @n: number of arguments
 * Return: Nothing
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;


	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (i < (n - 1) && sepertor != NULL)
			printf("%s", seperator);
	}
	va_end(numbers);
	printf("\n");
}
