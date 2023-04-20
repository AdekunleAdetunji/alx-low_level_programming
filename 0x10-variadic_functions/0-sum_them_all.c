#include <stdarg.h>

/**
 * sum_them_all - sums the total number of variable arguments in a function
 * @n: The total number of arguments supplied to the function
 * Return: Returns an integer value
 */

int sum_them_all(int n, ...)
{
	int i, arg_value, sum = 0;
	va_list args;

	if (n <= 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg_value = va_arg(args, int);
		if (arg_value)
			sum += arg_value;
	}
	va_end(args);
	return (sum);
}
