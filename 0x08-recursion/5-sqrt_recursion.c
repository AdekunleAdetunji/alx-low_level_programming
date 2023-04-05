/**
 * checker - checks for a value that will divide n, n times
 * @n: The parent value
 * @a: The divider
 * Return: Returns an integer value
 */
int checker(int n, int a)
{
	if (a * a == n)
		return (a);
	else if (a == 1)
		return (-1);
	return (checker(n, a - 1));
}
/**
 * _sqrt_recursion - prints the square root of a number
 * @n: The value we are considering
 * Return: Returns the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (checker(n, n / 2));
}
