#include <stdio.h>
/**
 * main - prints the number of arguments supplied to main function
 * @argc: The parameter holding the argument count
 * @argv: The parameter holding the argument vector
 * Return: Returns 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
