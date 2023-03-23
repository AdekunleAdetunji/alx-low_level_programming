/**
 * _isdigit - checks wether an input value is an integer
 * @c: The argument function is working with
 * Return: Returns 1 for an integer argument and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
