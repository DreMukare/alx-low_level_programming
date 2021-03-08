#ifndef DOG_H
#define DOG_H

/**
* struct dog - information on dogs 
* @name: name of doggo
* @age: age of doggo
* @owner: owner of doggo
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
/**
dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
*/
#endif /* DOG_H */
