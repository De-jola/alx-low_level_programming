#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: the pointer to the variable to be counted
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int i;
	int sum = 0;

	for (i = 0; i < s[i]; i++)
	{
		if (*s != '\0')
		{
			sum += 1;
		}
	}
	return (sum);
}