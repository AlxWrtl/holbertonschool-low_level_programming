#include "main.h"

/**
 * handleFileErrors - Check and handle file errors
 * @file_from: Source file descriptor
 * @file_to: Destination file descriptor
 * @argv: Command-line arguments
 */
void handleFileErrors(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * copyFileContents - Copy contents from source file to destination file
 * @source_file: Source file descriptor
 * @destination_file: Destination file descriptor
 * @argv: Command-line arguments
 */
void copyFileContents(int source_file, int destination_file, char *argv[])
{
	ssize_t read_bytes, written_bytes;
	char buffer[1024];

	read_bytes = read(source_file, buffer, sizeof(buffer));
	if (read_bytes == -1)
	{
		handleFileErrors(-1, 0, argv);
	}

	written_bytes = write(destination_file, buffer, read_bytes);
	if (written_bytes == -1)
	{
		handleFileErrors(0, -1, argv);
	}
}

/**
 * closeFile - Close file descriptor
 * @file_descriptor: File descriptor to close
 * @argv: Command-line arguments
 */
void closeFile(int file_descriptor)
{
	int result = close(file_descriptor);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - Copy content from one file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int source_file, destination_file;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_file = open(argv[1], O_RDONLY);
	destination_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	handleFileErrors(source_file, destination_file, argv);
	copyFileContents(source_file, destination_file, argv);

	closeFile(source_file);
	closeFile(destination_file);

	return (0);
}
