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
 * create_file - creates a new text file
 * @filename: Pointer to the file name
 * @text_content: The text to be copied into the file
 * Return: Returns 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, word_count;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0x600);
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}

	if (text_content)
	{
		word_count = count(text_content);
		bytes_written = write(fd, text_content, word_count);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
