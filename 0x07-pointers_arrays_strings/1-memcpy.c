/**
 * _memcpy - Copies a particular memory area another memory area
 * @src: The source memory area
 * @dest: The destination memory area
 * @n: The size of bytes we are to copy
 * Return: Returns a pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i != n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
