#include "holberton.h"

/**
  * print_diagonal - print
  * @n: int
**/
void print_diagonal(int n)
{
	int z, w;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (z = 0; z < n; z++)
	{
		for (w = 1; w <= z && w > 0; w++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	}
}
