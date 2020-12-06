#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **array_range - print
 *@min : var
 *@max : var
 *Return: 0
 */
int *array_range(int min, int max)
{
	int *p;
	int z, w = 0;

	if (min > max)
	return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	return (NULL);
	for (z = min; z <= max; z++)
	{
		p[w] = z;
		w++;
	}
	return (p);
}
