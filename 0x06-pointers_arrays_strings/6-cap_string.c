/**
 * cap_string - Capitalizes all the string in a memory address
 * @s: The address to the string
 *
 * Return: Returns the memory address to the string
 */
char *cap_string(char *s)
{
	int i, j, flag;
	char marker[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
			 ')', '{', '}'};

	flag = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (flag == 1 && !(s[i] >= 97 && s[i] <= 122))
			flag = 0;
		for (j = 0; marker[j] != '\0'; j++)
		{
			if (marker[j] == s[i])
				flag = 1;
		}
		if (flag == 1 && (s[i] >= 97 && s[i] <= 122))
		{
			s[i] = s[i] - 32;
			flag = 0;
		}
	}
	return (s);
}
