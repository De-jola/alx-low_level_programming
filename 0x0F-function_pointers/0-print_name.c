#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: A pointer to a string
 * @f: A pointer to a function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
