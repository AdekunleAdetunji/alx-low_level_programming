#include "main.h"

/**
 * read_textfile - read a text file and print its content to stdout
 * @filename: The address of the file
 * @letters: The number of characters to be printed
 * Return: The number of characters printed to the screen
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *str;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (!str)
		return (0);

	bytes_read = read(fd, str, letters);
	if (bytes_read < 0)
	{
		free(str);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, str, bytes_read);
	if (bytes_written < 1)
	{
		free(str);
		close(fd);
		return (0);
	}

	free(str);
	close(fd);

	return (bytes_written);
}
