#include "holberton.h"
#include <stdio.h>

/**
* main - checks argument count and calls other functions
* @ac: number of arguments
* @av: argument vector
*
* Return: 0 on success
*/
int main (int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	copy_func(av[1], av[2]);

	return (0);
}

/**
* copy_func - copies content from file_from to file_to
* @file_from: file from
* @file_to: file to
*
* Return: no return
*/
void copy_func(char *file_from, char *file_to)
{
	int fd_from, fd_to;
	char *buf = malloc(sizeof(char) * 1024);
	ssize_t read_from, written_to;

	fd_from = open(file_from, O_RDONLY | O_TRUNC, 0664);

	read_from = read(fd_from, (void *)buf, 1024);

	if (!file_from || fd_from == -1 || read_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	written_to = write(fd_to, (const void *)buf, read_from);

	if (fd_to == -1 || written_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	free(buf);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	else if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	close(fd_from);
	close(fd_to);
}
