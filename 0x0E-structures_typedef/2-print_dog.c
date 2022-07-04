#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a variable dog of type struct
 * @d:pointer to an element of type dog
 * Return: Nothing
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
