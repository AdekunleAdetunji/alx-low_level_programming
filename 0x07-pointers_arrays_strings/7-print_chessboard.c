#include "main.h"
/**
 * print_chessboard - prints the characters in a chessboard
 * @a: The string of the chess board
 * Return: Returns no value
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		if (i != 7)
			_putchar('\n');
	}
}
