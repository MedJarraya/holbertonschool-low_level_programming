
#include "holberton.h"
/**
*print_triangle - print
*@size: int
*/
void print_triangle(int size)
{
	int z, w, y;

	z = 0;
	if (size > 0)
	{
		while (z < size)
		{
			y = size - z;
			while (y > 1)
			{
				_putchar(' ');
				y--;
			}

			w = 0;
			while (w <= z)
			{
				_putchar('#');
				w++;
			}
			z++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
