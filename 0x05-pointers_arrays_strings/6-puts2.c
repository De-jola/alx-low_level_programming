#include "main.h"
/**
 * puts2 - prints every other character in a string
 * @str: the string inputted
 */
void puts2(char *str)
{
	int i;
	char p;

	i = 0;
	while (*(str + i) != '\0')
	{
		p = *(str + i);
		i = i + 2;
		_putchar(p);
	}
	_putchar('\n');
}
