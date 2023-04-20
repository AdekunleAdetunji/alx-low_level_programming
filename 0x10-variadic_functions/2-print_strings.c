#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints the strings supplied to a variadic function
 * @n: The number of strings to be printed
 * @seperator: The seperator for the strings
 * Return: Void
 */
void print_strings(char *seperator, int n, ...)
{
	int i;
	va_list arg_list;
	char *arg_value;

	if (n == 0 || seperator == NULL)
		return;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		arg_value = va_arg(arg_list, char *);
		if (arg_value)
		{
			if (n - 1 == i)
			{
				printf("%s\n", arg_value);
				break;
			}
			printf("%s%s", arg_value, seperator);
		}
		else
		{
			if (n - 1 == i)
				printf("(nil)\n");
			printf("(nil)%s", seperator);
		}
	}
	va_end(arg_list);
}
