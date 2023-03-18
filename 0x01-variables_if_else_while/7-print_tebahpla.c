#include <stdio.h>

/**
 * main - prints all lowercase alphabets in reverse order
 * Return: Returns an integer value of zero
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
