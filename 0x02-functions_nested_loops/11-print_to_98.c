#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 * @i: The integer value that will be supplied to function
 * Return: Returns null value
 */
void print_to_98(int i)
{
	if (i <= 98)
	{
		for (; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
		}
		putchar('\n');
	}
	else if (i > 98)
	{
		for (; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");
		}
		putchar('\n');
	}
}
