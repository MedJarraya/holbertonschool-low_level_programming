#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - print
 * @separator: var
 * @n: var
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	int z;

	if (n < 1)
	{
		putchar('\n');
		return;
	}

	va_start(arguments, n);
	z = 0;
	while (z < (int) n)
	{
		printf("%d", va_arg(arguments, int));
		if (separator != NULL && z != (int) n - 1)
			printf("%s", separator);
		z++;
	}
	printf("\n");
	va_end(arguments);
}
