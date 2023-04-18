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

	if (!name)
		return (NULL);
	mem = malloc(sizeof(dog_t));
	if (!mem)
	{
		free(mem);
		return (NULL);
	}
	if (name)
		mem->name = name;
	else
	{
		free(mem->name);
		free(mem);
		return (NULL);
	}
	if (age > 0)
	{
		mem->age = age;
	}
	else
	{
		free(mem);
		return (NULL);
	}
	if (owner)
		mem->owner = owner;
	else
	{
		free(mem->owner);
		free(mem);
		return (NULL);
	}
	return (mem);
}
