#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * _strlen - pritn
 * @s: var
 * Return: 0
 */
int _strlen(char *s)
{
	int z = 0;
	while (s[z] != '\0')
		z++;
	return (z);
}

/**
 * _strcpy - copies
 * @src: source string
 * @dest: buffer
 * Return: returns pointer
 */
char *_strcpy(char *dest, char *src)
{
	int w = 0;
	char *retval;

	while (src[w] != '\0')
	{
		dest[w] = src[w];
		w++;
	}
	dest[w] = src[w];

	retval = dest;

	return (retval);
}

/**
 * _strdup - duplicates a string
 * @str: string
 * Return: returns pointer
 */
char *_strdup(char *str)
{
	char *dupe;

	if (str == NULL)
		return (NULL);
	dupe = malloc(_strlen(str) + 1);
	if (dupe == NULL)
		return (NULL);
	_strcpy(dupe, str);
	return (dupe);
}
