#include "main.h"
/**
 * _strcpy - copies the string that is being pointed to
 * @dest: A pointer to a buffer
 * @src: A pointer to a string
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
