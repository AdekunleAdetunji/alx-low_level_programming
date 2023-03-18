#include <stdio.h>

/**
 * main - prints the first ten digits of base 10
 * Return: Returns an integer value of zero
 */
int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
}
