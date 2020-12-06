#include "holberton.h"
/**
*_strpbrk - print
*@s: var
*@accept: var
*Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
	int z = 0, w;

	while (s[z] != '\0')
	{
		w = 0;
		while (accept[w] != '\0')
		{
			if (accept[w] == s[z])
			{
				return (&s[z]);
			}
			w++;
		}
		z++;
	}

	return (0);
}
