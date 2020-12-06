#include "holberton.h"

/**
 * flip_bits - print
 * number to another
 *
 * @n: var
 * @m: var
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int z;
	unsigned int w;

	z = n ^ m;
	w = 0;
	while (z > 0)
	{
		if ((z & 1) != 0)
			w++;
		z = z >> 1;
	}
	return (w);
}
