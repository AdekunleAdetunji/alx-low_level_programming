#include <stdio.h>

/**
 * main - prints the first 50 fibonnanci numbers
 *
 * Return: Returns an integer value of 1
 */
int main(void)
{
	unsigned long int i, first, second, value;

	first = 1;
	second = 2;
	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
			putchar('0' + i);
		else if (i == 2)
			putchar('0' + i);
		else
		{
			value = first + second;
			first = second;
			second = value;
			printf("%ld", value);
		}
		if (i != 50)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
