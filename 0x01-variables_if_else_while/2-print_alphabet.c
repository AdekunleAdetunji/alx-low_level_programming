#include <stdio.h>

/**
 * main - prints all alpabetical characters in lowercase
 * Return: return an integer value of zero
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
