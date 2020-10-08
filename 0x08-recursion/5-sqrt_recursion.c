#include "holberton.h"

/**
 * _sqrt_recursion - square root
 * @n: var
 * Return: sqrt of n or error -1
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	else
		return (root_finder(n, 1));
}

/**
 * root_finder - square root
 * @z: z var
 * @tp: test possibilities of n root
 * Return: square root or -1 on error
 */

int root_finder(int z, int tp)
{
	if (z == (tp * tp))
		return (tp);
	else if (z > (tp * tp))
		return (root_finder(z, tp + 1));
	else
		return (-1);
}
