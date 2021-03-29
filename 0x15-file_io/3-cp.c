#include "holberton.h"
#include <stdio.h>

/**
* main - copies contents of one file to other file
* @ac: number of arguments
* @av: argument vector
*
* Return: 0 on success
*/
int main(int ac, char **av)
{
	int fd_from, fd_to, close1, close2, read_from;
	char buf[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]), exit(98);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((read_from = read(fd_from, buf, BUFSIZ)) > 0)
	{
		if (fd_to < 0 || (write(fd_to, buf, read_from) != read_from))
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (read_from == -1)
		dprintf(STDERR_FILENO, "Error; Can't read from %s\n", av[1]), exit(98);

	close1 = close(fd_from);
	if (close1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	close2 = close(fd_to);
	if (close2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
