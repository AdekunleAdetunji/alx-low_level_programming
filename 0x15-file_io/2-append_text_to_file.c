#include "main.h"

/**
 * count - count the number of characters in a string
 * @str: The pointer to the character array
 * Return: The count of the string
 */
int count(char *str)
{
	int i, strcount = 0;

	for (i = 0; str[i] != '\0'; i++)
		strcount += 1;
	return (strcount);
}

/**
 * append_text_to_file - append text to the end of a file
 * @filename: The pointer to the filename
 * @text_content: The character array to be added to the file
 * Return: An integer value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int bytes_added, fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 1)
	{
		close(fd);
		return(-1);
	}

	if (text_content)
	{
		bytes_added = write(fd, text_content, count(text_content));
		if (bytes_added < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
