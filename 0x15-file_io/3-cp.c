#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER_SIZE 1024

/* Function prototypes */
int open_source_file(const char *source_filename);
int open_dest_file(const char *dest_filename);
int copy_files(int source_fd, int dest_fd);

/**
 * main - Copies the content of a file to another file.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 * Return: (0) on success, or the corresponding exit code on failure.
 */
int main(int ac, char *av[])
{
	int source_fd, dest_fd;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	source_fd = open_source_file(av[1]);
	if (source_fd == -1)
		return (98);

	dest_fd = open_dest_file(av[2]);
	if (dest_fd == -1)
	{
		close(source_fd);
		return (99);
	}

	if (copy_files(source_fd, dest_fd) == -1)
	{
		close(source_fd);
		close(dest_fd);
		return (99);
	}

	if (close(source_fd) == -1 || close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		return (100);
	}

	return (0);
}

/**
 * open_source_file - Opens the source file for reading.
 * @source_filename: The name of the source file.
 * Return: The file descriptor of the source file or -1 on failure.
 */
int open_source_file(const char *source_filename)
{
	int source_fd = open(source_filename, O_RDONLY);

	if (source_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_filename);

	return (source_fd);
}

/**
 * open_dest_file - Opens the destination file for writing.
 * @dest_filename: The name of the destination file.
 * Return: The file descriptor of the destination file or -1 on failure.
 */
int open_dest_file(const char *dest_filename)
{
	int dest_fd = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (dest_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);

	return (dest_fd);
}

/**
 * copy_files - Copies data from the source file to the destination file.
 * @source_fd: The file descriptor of the source file.
 * @dest_fd: The file descriptor of the destination file.
 * Return: 0 on success, -1 on failure.
 */
int copy_files(int source_fd, int dest_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);

		if (bytes_written == -1)
			return (-1);
	}

	return (0);
}
