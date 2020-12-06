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
dog_t *new_doggo(char *name, float age, char *owner)
{
	struct dog *new_doggo;

	new_doggo = malloc(sizeof(struct dog));
	if (new_doggo == NULL)
		return (NULL);
	new_doggo->name = name;
	new_doggo->age = age;
	new_doggo->owner = owner;
	return (new_doggo);
}
