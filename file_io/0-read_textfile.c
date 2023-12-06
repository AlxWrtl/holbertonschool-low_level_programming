#include "main.h"

/**
 * read_textfile - Reads and prints a specified number of letters from a file.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * This function reads a specified number of letters
 * from the file with the given
 * filename and prints them to the standard output.
 * It returns the actual number
 * of letters read and printed.
 * If the file cannot be opened, the function returns 0.
 * If memory allocation fails, it returns 0.
 * If reading or printing fails, it returns 0.
 *
 * Return: The number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	if (bytes_written == -1 || (size_t)bytes_written < letters)
		return (0);

	return (bytes_read);
}
