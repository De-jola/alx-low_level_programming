#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * create_array - creates an array of characters with unsigned int size
 * @size: The size of the array
 * @c: The character to be filled in the array
 * Return: Pointer to a character
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

