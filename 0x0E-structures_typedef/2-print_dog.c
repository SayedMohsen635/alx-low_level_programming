#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the dog struct
 * @d: pointer to struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("(nil)");
		else
			printf("Name: %s", d->name);
		if (d->age == 0)
			printf("(nil)");
		else
			printf("Age: %f", d->age);
		if (d->owner == NULL)
			printf("(nil)");
		else
			printf("Owner: %s", d->owner);
	}
}
