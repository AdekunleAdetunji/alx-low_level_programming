#include <stdio.h>
/**
 * main - prints the number of arguments supplied to main function
 * @argc: The parameter holding the argument count
 * @argv: The parameter holding the argument vector
 * Return: Returns 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
