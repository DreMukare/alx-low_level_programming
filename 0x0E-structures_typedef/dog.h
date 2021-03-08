#ifndef DOG_H
#define DOG_H

/**
* struct dog - such a good pupper
* @name: name of doggo
* @age: age of doggo
* @owner: owner of doggo
*
* Description: This struct will be used to hold details for different dogs
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);
/**
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
*/
#endif /* DOG_H */
