#include "3-calc.h"

/**
 * get_op_func - function to return the operator function
 * @s: The character we are comparing against each function operator
 * Return: The operator function that matches the argument character
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;
	op_t op[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (op[i].op)
	{
		if (strcmp(op[i].op, s) == 0)
			return (op[i].f);
		i++;
	}
	return (op[i].f);
}
