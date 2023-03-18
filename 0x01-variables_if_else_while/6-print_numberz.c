#include <stdio.h>

/**
 * main - prints the first ten decimals using putchar
 * Return: returns an integer value of zero
 */
int main(void)
{
	char value;

	value = '0';
	while (value <= '9')
	{
		putchar(value);
		value++;
	}
	putchar('\n');
	return (0);
}
