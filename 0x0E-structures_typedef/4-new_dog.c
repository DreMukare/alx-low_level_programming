#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: name of owner
*
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j;

	if (!name || !age || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return(NULL);

	i = 0;
	while (name[i] != '\0')
		i++;

	j = 0;
	while (owner[j] != '\0')
		j++;

	name = malloc(sizeof(char) * i);
	if (name == NULL)
	{
		free(d);
		return (NULL);
	}

	owner = malloc(sizeof(char) * j);
	if (owner == NULL)
	{
		free(d);
		return (NULL);
	}


	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	return (d);
}
