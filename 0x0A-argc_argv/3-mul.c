#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: The count of arguments
 * @argv: Pointer to an array of strings
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, j, k;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		k = i * j;
		printf("%d\n", k);
		return (0);
	}
}
