#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints the variadic arguments supplied to a function
 * seperated by the seperator string
 * @seperator: The string to seperate the argements
 * @n: The number of arguments supplied to the function
 * Return: Return a void value
 */
void print_numbers(const char *seperator, int n, ...)
{
	int i, arg_value;
	va_list arg_list;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		arg_value = va_arg(arg_list, int);
		if (n - 1 == i)
		{
			printf("%d", arg_value);
			continue;
		}
		printf("%d", arg_value);
		if (seperator)
			printf("%s", seperator);
	}
	va_end(arg_list);
	putchar('\n');
}
