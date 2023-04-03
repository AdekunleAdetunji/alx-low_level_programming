/**
 * _memset - Fills a memory with a constant byte
 * @s: The memory area to be filled
 * @b: The constant byte to be used in filling the memory area
 * @n: The first n bytes of the memory area to be filled
 * Return: Returns a pointer to the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i != n; i++)
	{
		s[i] = b;
	}
	return (s);
}
