#include "holberton.h"

/**
* create_file - creates a file
* @filename: name of file
* @text_content: text to go in file
*
* Return: 1 on success, -1 on failure
* -1 if filename is NULL
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t written;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	written = write(fd, (void *)text_content, len);

	if (written == -1)
		return (-1);

	close(fd);

	if (close(fd) == -1)
		return (-1);

	return (1);
}
