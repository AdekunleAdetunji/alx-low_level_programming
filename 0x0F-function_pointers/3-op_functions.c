#include "3-calc.h"

/**
 * op_add - The function to execute additon
 * @a: The first operand
 * @b: The second operand
 * Return:sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The function to execute subtraction
 * @a: The first operand
 * @b: The second operand
 * Return: The difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The function to execute multiplication
 * @a: The first operand
 * @b: The second operand
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The function to execute division
 * @a: The first operand
 * @b: The second operand
 * Return: The result of division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - The function to execute the modulo operation
 * @a: The first operand
 * @b: The second operand
 * Return: The remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
