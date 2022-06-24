#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints a name
 * @argc: Count of the arguments supplied to the program
 * @argv: An array or pointer to an array with the size of argc
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i;

	i = argc;
	while (i > 0)
	{
		printf("%s\n", *argv);
		i--;
	}
	return (0);
}
