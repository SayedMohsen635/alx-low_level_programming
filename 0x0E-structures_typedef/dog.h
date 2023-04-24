#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - structure for a dog
 * @name: first member
 * @age: second member
 * @owner: third member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
