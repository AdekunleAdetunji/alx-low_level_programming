#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the content of a struct to stdout
 * @d: The struct pointer
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else if (d->name == NULL)
		printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else if (d->owner == NULL)
		printf("Owner: (nil)\n");
}
