#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - new doggo house
 * @name: new doggo name
 * @age: new doggo age
 * @owner: new doggo ownername
 * Return: new_doggo
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_doggo);
}
