#include <stdlib.h>
#include "holberton.h"
/**
* alloc_grid - function that returns a pointer
* @width: width of the grid
* @height: height of the grid
* Return: return the value 0 for each element of the grid
**/
int **alloc_grid(int width, int height)
{
	int i = 0, b = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	while (i < height)
	{
		b = 0;
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		while (b < width)
		{
			p[i][b] = 0;
			b++;
		}
		i++;
	}
	return (p);
}
