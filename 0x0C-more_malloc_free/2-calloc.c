#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of elements
 * @nmemb: The number of elements in the array
 * @size: The size of elements
 * Return: A void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(ptr + i) = 0;
	return ((void *)ptr);

}
