#include <stdio.h>

/**
 * array_iterator - executes a function on each element of an arrayy
 * @size: The size of the array
 * @array: The array under consideration
 * @action: The action we are to perform on each element of the array
 * Return: A void value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
