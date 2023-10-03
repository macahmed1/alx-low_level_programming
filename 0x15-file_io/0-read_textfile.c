#include "main.h"

/**
 * read_textfile - Reads and prints a text file to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	n = read(fd, buffer, letters);
	if (n == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	if (write(STDOUT_FILENO, buffer, n) == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (n);
}

