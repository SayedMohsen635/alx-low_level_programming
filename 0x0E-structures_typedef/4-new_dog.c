#include "dog.h"

/**
 * new_dog - this function creates a new dog
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n = name;
	char *o = owner;
	dog_t dog;

	dog->name = n;
	dog->age = age;
	dog->owner = o;
	return (dog);
}
