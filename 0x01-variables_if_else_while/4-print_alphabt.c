#include <stdio.h>

/**
 * main - prints all alphabets except 'q' and 'e'
 * Return: returns the integer value zero
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != q)
		{
			putchar(c);
			c++
		}
	}
	putchar('\n');
	return (0);
}
