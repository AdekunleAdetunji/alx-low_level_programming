#include <stdio.h>
/**
 * main - prints the arguments supplied to it
 * @argc: The parameter holding the argument count
 * @argv: The parameter hoding the argument vector
 * Return: Returns 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
