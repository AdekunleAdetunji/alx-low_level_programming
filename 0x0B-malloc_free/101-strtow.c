#include <stdio.h>
#include <stdlib.h>

/**
 * wc - counts the number of words in a string
 * @s: The string we want to count its word
 * Return: An integer value of the word count
 */
int wc(char *s)
{
	int i, count = 0, flag = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (flag == 1 && s[i] != ' ')
		{
			count += 1;
			flag = 0;
			continue;
		}
		else if (flag == 0 && s[i] == ' ')
		{
			flag = 1;
			continue;
		}
	}
	return (count);
}

/**
 * strtow - breaks a string into words and stores this words in a new memory
 * @str: The string we want to operate on
 * Return: A pointer or Null value
 */
char **strtow(char *str)
{
	int i, x, y, count, word_len, ws, we;
	char **mem_y, *mem_x;

	count = wc(str);
	mem_y = malloc(sizeof(char *) * (count + 1));
	if (!mem_y)
		return (NULL);
	ws = 0;
	we = 0;
	for (y = 0; y < count; y++)
	{
		for (i = ws; str[i] != '\0'; i++)
			if (str[i] != ' ')
			{
				ws = i;
				break;
			}
		for (i = ws; str[i] != '\0'; i++)
			if (str[i] == ' ')
			{
				we = i;
				break;
			}
		word_len = we - ws;
		mem_x = malloc(sizeof(char) * word_len);
		if (!mem_x)
			return (NULL);
		for (x = 0; x < word_len; x++)
			mem_x[x] = str[x + ws];
		ws = we;
		mem_x[x] = '\0';
		mem_y[y] = mem_x;
	}
	mem_y[y] = NULL;
	return (mem_y);
}
