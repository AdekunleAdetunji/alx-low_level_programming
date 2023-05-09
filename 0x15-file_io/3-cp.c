#include "main.h"

/**
 * quit - prints error message encountered when closing a file
 * @fd: The file descriptor of the file under consideration
 * Return: Void
 */
void quit(int fd)
{
	int close_return;

	close_return = close(fd);
	if (close_return < 0)
	{
		dprintf(2, "Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * error - prints error message when an error is encountered while
 * opening, reading, writing, to a file
 * @flag: The flag to determine the kind of error message
 * @filename: The filename supplied on the command line
 * Return: Void
 */
void error(int flag, char *filename)
{
	if (flag == 1)
	{
		quit(3);
		quit(4);
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (flag == 2)
	{
		quit(3);
		quit(4);
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - copies the content of one file to the other
 * @argc: The total number of arguments supplied to the program
 * @argv: The argument vector of the program
 * Return: Returns an integer value
 */
int main(int argc, char **argv)
{
	int i, file_from, file_to, bytes_read = 1024, bytes_written;
	char str[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 1)
	{
		quit(3);
		dprintf(2, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (file_to < 1)
		error(2, argv[2]);

	for (i = 0; bytes_read == 1024; i++)
	{
		bytes_read = read(file_from, str, sizeof(str));
		if (bytes_read < 0)
			error(1, argv[1]);
		bytes_written = write(file_to, str, bytes_read);
		if (bytes_written < 0)
			error(2, argv[2]);
	}

	quit(3);
	quit(4);
	return (0);
}
