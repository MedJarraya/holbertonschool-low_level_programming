#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free doggo
 * @d: doggo
 * Return: 0.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
