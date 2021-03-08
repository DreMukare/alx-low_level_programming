#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initializes variable of type dog
* @d: variable pointer
* @name: pointer to name
* @age: age of dog
* @owner: owner of dog
*
* Returns: no return
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
