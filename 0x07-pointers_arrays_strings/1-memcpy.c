#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: Memory area to be copied to
 * @src: Memory area to be copied from
 * @n: The number of bytes of memory area to be copied
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		if (src[i] == 6)
		{
			*(src + i) = 7;
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
