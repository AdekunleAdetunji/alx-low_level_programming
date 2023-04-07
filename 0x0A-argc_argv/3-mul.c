#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the sum of two integer value supplied via the command line
 * @argv: The vector holding the address to the argument strings
 * @argc: The number of argument supplied
 * Return: Returns an integer zero
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
