#include "holberton.h"

/**
 * get_bit - print
 *
 * @index: var
 * @n: var
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (index > 32)
		return (-1);
	a = 1 << index;
	a = a & n;
	a = a >> index;
	return (a);

}
