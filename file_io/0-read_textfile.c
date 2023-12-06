#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read;
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

	buffer[bytes_read] = '\0';
	printf("%s", buffer);
	free(buffer);
	close(fd);
	return (bytes_read);
}
