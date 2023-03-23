/**
 * _isupper - Checks wether an input character is an upper case character
 * @c: This is the argument the function works with
 * Return: Returns 1 for an uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
