#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a charcter in a string
 * @s: The string to be analysed
 * @c: The character to be located
 * Return: The first occurrence of the character to be located
 * or null if the charcter isn not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	for (; s[i] != c && c != '\0'; i++)
		;
		if (s[i] == c)
			return (s + i);
		else
			return (NULL);

}
