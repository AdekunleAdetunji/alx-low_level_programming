#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: The integer value we want to print its last digit
 * Return: Returns the last digit of the argument
 */
int print_last_digit(int i)
{
	int a;

	a = i%10;
	if (a < 0)
	{
		a *= -1;
	}
	_putchar(a + '0');
	return(a);
}
