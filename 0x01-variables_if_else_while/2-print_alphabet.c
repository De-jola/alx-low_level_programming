#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alphabets;

	alphabets = 'a';
	while (alphabets >= 'a' && alphabets <= 'z')
	{
		putchar(alphabets);
		putchar('\n');
		alphabets++;
	}
	return (0);
}
