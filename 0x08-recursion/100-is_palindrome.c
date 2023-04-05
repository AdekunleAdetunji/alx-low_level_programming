/**
 * count - counts the length of a string
 * @s: The string provided to the function
 * Return: Returns an integer value of the string length
 */
int count(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + count(s + 1));
}

/**
 * checker - compares the string at position x from right and x from left
 * wether they are equal
 * @s: The string we are testing
 * @y: The character at index y counting from the right
 * Return: Returns 1 for palidrom and 0 for otherwise
 */
int checker(char *s, char *y)
{
	if (s[0] != y[0])
		return (0);
	if ((s[0] == y[0]) && (s == y || s + 1 == y))
		return (1);
	return (checker(s + 1, y - 1));
}

/**
 * is_palindrome - checks wether a string is a palidrome
 * @s: The string we are checking for
 * Return: Returns an integer value
 */
int is_palindrome(char *s)
{
	int y;

	y = count(s) - 1;
	if (s[0] == '\0')
		return (1);
	return (checker(s, s + y));
}
