#include "3-calc.h"

/**
 * main - main function
 * @argc: The number of arguments supplied to the command line
 * @argv: The argument vector of string supplied to the command line
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b, sol;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (!f)
	{
		puts("Error");
		exit(99);
	}
	sol = f(a, b);
	printf("%d\n", sol);

	return (0);
}
