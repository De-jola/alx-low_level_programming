#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: void pointer
 * @old_size: previously allocated size
 * @new_size: new size to be allocated
 * Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *c;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	c = malloc(new_size * sizeof(char));
	if (c == NULL)
		return (NULL);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			c[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (c);
	}
	while (i < new_size)
	{
		c[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (c);
}
