#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - pritn
 *
 * @b: var
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int rez, tmp;
	int z, w;

	if (b == NULL)
		return (0);
	z = rez = 0;
	while (b[(z + 1)] != '\0')
		z++;
	w = 0;
	while (z >= 0)
	{
		if ((b[z] != '1' && b[z] != '0'))
			return (0);
		tmp = 0;
		if (b[z] == '1')
		{
			tmp += power_two(w);
		}
		rez += tmp;
		w++;
		z--;
	}
	return (rez);
}

/**
 * power_two - quick function to get power of twos
 *
 * @power: power of 2 to return
 * Return: returns result
 */
unsigned int power_two(int power)
{
	int z = 0;
	unsigned int sum = 1;

	while (z != power)
	{
		sum *= 2;
		z++;
	}
	return (sum);
}
