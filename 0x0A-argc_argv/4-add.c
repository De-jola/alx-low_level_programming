#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * main - adds numbers
 * @argc: Count of number of arguments
 * @argv: The pointer to an array of strings
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, j, k;

	k = 0;
	for (i = 1; i < argc; i++)
	{
		j = is_digit(argv[i]);
		if (j == -1)
		{
			printf("Error\n");
			return (1);
		}
		k += j;
	}
	printf("%d\n", k);
	return (0);
}

/**
 * is_digit - checks if char is a digit
 * @s: The character to be examined
 * Return: 1 else -1
 */
int is_digit(char *s)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = strlen(s);
	while (i < k)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (-1);
		}
		else
			j = j * 10 + (s[i] - '0');
		i++;
	}
	return (j);
}
