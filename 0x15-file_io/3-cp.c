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
	if (close_return == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * error - prints error message when an error is encountered while
 * opening, reading, writing, to a file
 * @flag: The flag to determine the kind of error message
 * @filename: The filename supplied on the command line
 * @fd: The file descriptor value
 * Return: Void
 */
void error(int flag, int fd, char *filename)
{
	if (flag == 1 && fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			filename);
		exit(98);
	}
	else if (flag == 2 && fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	error(1, file_from, argv[1]);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error(2, file_to,  argv[2]);

	for (i = 0; bytes_read == 1024; i++)
	{
		bytes_read = read(file_from, str, sizeof(str));
		error(1, bytes_read, argv[1]);
		bytes_written = write(file_to, str, bytes_read);
		error(2, bytes_written, argv[2]);
	}
	quit(file_from);
	quit(file_to);
	return (0);
}
