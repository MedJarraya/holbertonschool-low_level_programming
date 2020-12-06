#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - print
 * @ptr: var
 * @old_size: var
 * @new_size: var
 * Return: 0
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
