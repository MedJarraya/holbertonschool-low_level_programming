#include "holberton.h"
/**
*_strspn - print
*@s: var
*@accept: var
*Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int z, w = 0, y = 0;

	while (s[w] != '\0' && s[w] != ' ')
	{
		z = 0;
		while (accept[z] != '\0')
		{
			if (accept[z] == s[w])
			{
				y += 1;
			}
			z++;
		}
		w++;
	}


	return (y);
}
