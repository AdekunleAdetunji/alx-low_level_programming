#include "main.h"
/**
 * _pow_recursion - computes the value of X raised to the power of Y
 * @x: The base value
 * @y: The superscript
 * Return: Returns the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
