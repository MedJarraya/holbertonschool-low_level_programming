#include "holberton.h"

/**
 * _memset - fills memory with constant bytes
 *
 * @s: int
 * @b: str
 * @n: int
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;
	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}
	return (s);
}
