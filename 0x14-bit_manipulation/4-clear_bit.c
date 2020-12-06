#include "holberton.h"

/**
 * clear_bit - print
 *
 * @n: var
 * @index: var
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 32)
		return (-1);
	a = 1 << index;
	*n &= ~(a);
	return (1);
}
