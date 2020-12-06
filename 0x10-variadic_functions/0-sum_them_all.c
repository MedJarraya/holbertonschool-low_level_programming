#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - print
 *
 * @n: var
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int total, z;
	va_list list;


	if (n == 0)
		return (0);

	va_start(list, n);

	total = z = 0;
	while (z < (int) n)
	{
		total += va_arg(list, int);
		z++;
	}

	va_end(list);
	return (total);
}
