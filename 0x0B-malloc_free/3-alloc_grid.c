#include <stdlib.h>
#include "holberton.h"
/**
* alloc_grid - print
* @width: var
* @height: var
* Return: 0
**/
int **alloc_grid(int width, int height)
{
	int z = 0, w = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	while (z < height)
	{
		w = 0;
		p[z] = malloc(width * sizeof(int));
		if (p[z] == NULL)
		{
			for (; z >= 0; z--)
				free(p[z]);
			free(p);
			return (NULL);
		}
		while (w < width)
		{
			p[z][w] = 0;
			w++;
		}
		z++;
	}
	return (p);
}
