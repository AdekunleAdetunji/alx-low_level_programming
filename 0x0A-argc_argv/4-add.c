#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of integer arguments supplied via the command line
 * @argv: The vector holding the integer string arguments supplied via the CL
 * @argc: The count of arguments supplied to the CL
 * Return: Returns 0 on succesful program execution and 1 for an error
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
