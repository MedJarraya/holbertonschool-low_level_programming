#include "holberton.h"
/**
*_strstr - print
*@haystack: var
*@needle: var
*Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	int z, w;

	if (needle[0] == '\0' || haystack[0] == '\0')
	{
		return (haystack);
	}

	z = 0;
	while (haystack[z] != '\0')
	{
		w = 0;
		while (needle[w] == haystack[z + w])
		{
			if (needle[w + 1] == '\0')
			{
				return (&haystack[z]);
			}
			w++;
		}
		z++;
	}

	return (0);
}
