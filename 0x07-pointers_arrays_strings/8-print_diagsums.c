#include "holberton.h"
#include <stdio.h>
/**
*print_diagsums - print
*@a: var
*@size: var
*
*/
void print_diagsums(int *a, int size)
{
	int z;
	long int t1, t2;

	t1 = 0;
	t2 = 0;
	for (z = 0; z < size; ++z)
	{
		t1 += a[(size + 1) * z];
	}
	for (z = size - 1; z >= 0; --z)
	{
		t2 += a[(size - 1) * (z + 1)];
	}
	printf("%ld, %ld\n", t1, t2);
}
