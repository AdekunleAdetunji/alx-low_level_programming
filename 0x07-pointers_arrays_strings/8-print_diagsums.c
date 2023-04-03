#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals in a chess set
 * @a: The matrix we are considering here
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int x, y, left, right;

	left = 0;
	right = 0;
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			if (x == y)
				left += *(a + (y * size + x));
			if (size - 1 == x + y)
				right += *(a + (y * size + x));
		}
	}
	printf("%d, %d\n", left, right);
}
