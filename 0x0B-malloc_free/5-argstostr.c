#include "holberton.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of the program
* @ac: argument count
* @av: argument vector
*
* Return: pointer to new string on success
* NULL if ac == 0 or av == NULL
* NULL on fail
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, j = 0, k = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}

	str = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
