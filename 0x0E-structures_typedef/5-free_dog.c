#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated to dog_t struct
 * @d: The structure pointer we are to free
 * Return: A void value
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
