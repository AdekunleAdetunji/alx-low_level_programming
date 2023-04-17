#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: Returns a pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mem;

	mem = malloc(sizeof(dog_t));
	if (!mem)
		return (NULL);
	mem->name = name;
	mem->age = age;
	mem->owner = owner;
	return (mem);
}
