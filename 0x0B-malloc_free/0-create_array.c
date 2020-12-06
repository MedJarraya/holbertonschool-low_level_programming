#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - print
 * @c: var
 * @size: var
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int z;
	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < size; z++)
		*(p + z) = c;
	*(p + z) = '\0';

	return (p);
}
