#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: A pointer to a string to be compared
 * @s2: A pointer to another string to be compared
 * Return: returns an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			j = 0;
		}
		else if (s1[i] < s2[i])
		{
			j = -15;
			break;
		}
		else
		{
			j = 15;
			break;
		}
		i++;
	}
	return (j);

}
