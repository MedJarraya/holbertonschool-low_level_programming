#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **string_nconcat - print
 *@s1 : var
 *@s2 : var
 *@n : var
 *Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{



	unsigned int a, b, z, w;
	char *s;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	;
	for (b = 0; s2[b] != '\0'; b++)
	;
	if (n >= b)
	n = b;
	s = malloc(sizeof(char) * (a + n + 1));
	if (s == NULL)
	return (NULL);
	for (z = 0; s1[z] != '\0'; z++)
	s[z] = s1[z];
	for (w = a; w < a + n; w++)
	s[w] = s2[w - a];
	s[w] = '\0';
	return (s);
}
