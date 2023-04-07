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
		if (i == 0 && (s[i] == '+' || s[i] == '-'))
			continue;
		else if (!(s[i] >= '0' && s[i] <= '9'))
			return (1);
	}
	return (0);
}

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money
 * @argv: The vector of the integer supplied via the command line
 * @argc: The count of the argument supplied on the command line
 * Return: Returns 0 on succesful program execution and 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, min, cent;

	min = 0;
	cent = atoi(argv[1]);
	if (argc != 2 || checker(argv[1]))
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; cent > 0; i++)
	{
		if (cent / 25)
		{
			min += cent / 25;
			cent = cent % 25;
		}
		else if (cent / 10)
		{
			min += cent / 10;
			cent = cent % 10;
		}
		else if (cent / 5)
		{
			min += cent / 5;
			cent = cent % 5;
		}
		else if (cent / 2)
		{
			min += cent / 2;
			cent = cent % 2;
		}
		else if (cent / 1)
		{
			min += cent / 1;
			cent = cent % 1;
		}
	}
	printf("%d\n", min);
	return (0);
}
