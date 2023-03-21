#include "main.h"

int print_putchar(void);

/**
 * main - calls the print_putchar() function
 * Return: Returns an integer value of zero
 */
int main(void)
{
	print_putchar();
	return (0);
}

/**
 * 0_putchar - prints the "_putchar" using _putchar() funtion
 * Return: Returns an integer value of zero
 */
int print_putchar(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
