#include "holberton.h"

/**
* append_text_to_file - appends text at end of file
* @filename: name of file
* @text_content: text to be appended at end of file
*
* Return: 1 on success, -1 of failure
* -1 if filename is NULL
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_APPEND | O_WRONLY), len = 0;

	if (!filename || fd == -1)
		return (-1);

	while (text_content && text_content[len] != '\0')
		len++;

	if (len)
		write(fd, text_content, len);

	return (1);
}
