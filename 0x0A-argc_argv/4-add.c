#include <stdio.h>
#include <stdlib.h>
/**
 * checker - checks if the input string is an integer
 * @s: The input string address
 * Return: Returns 1 if true and 0 if false
 */
int checker(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && (s[i] == '-' || s[i] == '+'))
			continue;
		else if (!(s[i] >= '0' && s[i] <= '9'))
			return (1);
	}
	return (0);
}

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
		if (!atoi(argv[i]) || checker(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
