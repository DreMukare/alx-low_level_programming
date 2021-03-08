#include "dog.h"

/**
* init_dog - initializes variable of type dog
* @d: pointer to variable
* @name: pointer to name
* @age: age of dog
* @owner: pointer to owner of dog
*
* Return: no return
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
