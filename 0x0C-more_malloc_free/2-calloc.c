#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - print
 * @nmemb: var
 * @size: var
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
unsigned int z;

if (size == 0 || nmemb == 0)
return (NULL);
s = malloc(size * nmemb);
if (s == NULL)
return (NULL);
	for (z = 0; z < nmemb * size; z++)
	{
		s[z] = '\0';
	}
	return (s);
}
