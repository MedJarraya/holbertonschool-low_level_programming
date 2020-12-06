#include "holberton.h"

/**
  * print_square - rint
  * @size: int
**/
void print_square(int size)
{
	int z, w;

	if (size <= 0)
		_putchar('\n');

	for (w = 0; w < size; w++)
	{
	for (z = 1; z <= size && z > 0; z++)
	{
		_putchar('#');
		if (z == size)
			_putchar('\n');
	}
	}
}
