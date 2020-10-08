#include "holberton.h"
/**
 * factorial - fact
 * @n: var
 * Return: 1 or n fact
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n <= 1)
	return (1);
	n = n * factorial(n - 1);
	return (n);
}
