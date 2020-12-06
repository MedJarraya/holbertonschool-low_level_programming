#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - moves data in pointer to new area with different space allocated
 * @ptr: pointer to move data from
 * @old_size: size of current pointer
 * @new_size: size of new pointer
 * Return: returns pointer to space allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newspace;

	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	newspace = malloc(new_size);
free(ptr);
return (newspace);
}
