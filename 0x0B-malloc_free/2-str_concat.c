#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - print
 * @s1: var 
 * @s2: var
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int z = 0, t = 0, w = 0;

	if (s1 != NULL)
	{
		while (s1[z])
		{
			z++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[t])
		{
			t++;
		}
	}
	p = malloc((z + t + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	while (w < z)
	{
		p[w] = s1[w];
		w++;
	}
	while (w < z + t)
	{
		p[w] = s2[w - z];
		w++;
	}
	p[w + 1] = '\0';
	return (p);
}
