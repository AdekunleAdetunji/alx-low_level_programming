#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Returns the value zero
 */
int main(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		putchar(c + '0');
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
