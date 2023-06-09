#include "main.h"
/**
 * reverse_array - reverses the array in a memory address
 * @a: The address holding the array
 * @n: The number of elements in the array
 *
 * Return: Returns a void value
 */
void reverse_array(int *a, int n)
{
	int i, half, temp_a, temp_b;

	half = n / 2;
	for (i = 0; i < half; i++)
	{
		temp_a = *(a + i);
		temp_b = *(a + (n - 1 - i));
		*(a + i) = temp_b;
		*(a + n - 1 - i) = temp_a;
	}
}
