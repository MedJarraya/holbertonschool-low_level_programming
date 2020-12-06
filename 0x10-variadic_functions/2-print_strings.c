#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - print
 * @separator: var
 * @n: var
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	char *tempstring;
	int z;

	if (n < 1)
	{
		printf("\n");
		return;
	}

	va_start(arguments, n);
	z = 0;
	while (z < (int) n)
	{
		tempstring = va_arg(arguments, char*);
		if (tempstring != NULL)
			printf("%s", tempstring);
		else
			printf("(nil)");
		if (separator != NULL && z != (int) n - 1)
			printf("%s", separator);
		z++;
	}
	printf("\n");
	va_end(arguments);
}
