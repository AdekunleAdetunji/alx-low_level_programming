#include <stdio.h>

/**
 * main - prints the first ten decimals using putchar
 * Return: returns an integer value of zero
 */
int main(void)
{
	int value;

	value = 0;
	while (value <= 9)
	{
		putchar(value + '0');
		value++;
	}
	putchar('\n');
	return (0);
}
