#ifndef _DOG_H_
#define _DOG_H_

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

/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

int _putchar(char);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* _DOG_H_ */
