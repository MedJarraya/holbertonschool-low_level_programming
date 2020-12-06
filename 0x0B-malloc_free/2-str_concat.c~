#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - add two string
 * @s1:string
 * @s2:string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int i, j, r;
i = 0;
j = 0;
r = 0;
	if (s1 != NULL)
	{
		while (s1[i])
		{
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j])
		{
			j++;
		}
	}
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	while (r < i)
	{
		p[r] = s1[r];
		r++;
	}
	while (r < i + j)
	{
		p[r] = s2[r - i];
		r++;
	}
	p[r + 1] = '\0';
	return (p);
}
