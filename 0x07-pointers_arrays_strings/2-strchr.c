#include "holberton.h"
/**
 * *_strchr - print
 *
 * @s: var
 * @c: var
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a;

	a = 0;
	while (s[a] >= '\0')
	{
		if (s[a] == c)
		{	
		return (&s[a]);
	}
	a++;
	}
	return (0);
}
