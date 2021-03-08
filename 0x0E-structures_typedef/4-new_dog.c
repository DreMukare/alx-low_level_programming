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
	unsigned int i = 0, j = 0, count;

	if (!name || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	while (name[i])
		i++;

	while (owner[j])
		j++;

	(*d).name = malloc(sizeof(char) * i);
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}

	(*d).owner = malloc(sizeof(char) * j);
	if ((*d).owner == NULL)
	{
		free(d);
		free((*d).name);
		return (NULL);
	}

	(*d).age = age;
	for (count = 0; count < i; count++)
		(*d).name[count] = name[count];
	for (count = 0; count < j; count++)
		(*d).owner[count] = owner[count];
	return (d);
}
