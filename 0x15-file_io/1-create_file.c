#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file with the given text content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_result;
	mode_t file_permissions = S_IRUSR | S_IWUSR; // rw-------

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, file_permissions);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_result = write(fd, text_content, strlen(text_content));
		if (write_result == -1)
		{
		close(fd);
		return (-1);
		}
	}

	close(fd);
	return (1);
}
