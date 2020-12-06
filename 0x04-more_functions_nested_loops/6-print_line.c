#include "holberton.h"

/**
  * print_line - print line
  * @n: int
**/
void print_line(int n)
{
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (z = 0; z < n; z++)
		_putchar('_');
		_putchar('\n');
	}
}
