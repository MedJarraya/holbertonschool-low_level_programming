#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints all arguments passed to it
 * @format: list of argument types
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	char *tempstring;
	int z;

	va_start(arguments, format);
	z = 0;
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[z] != '\0')
	{
		switch (format[z])
		{
		case 'c':
			printf("%c", (char) va_arg(arguments, int));
			break;
		case 'i':
			printf("%d", va_arg(arguments, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(arguments, double));
			break;
		case 's':
			tempstring = va_arg(arguments, char*);
			if (tempstring != NULL)
			{
				printf("%s", tempstring);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[z] == 'c' || format[z] == 'z' || format[z] == 'f' ||
		     format[z] == 's') && format[(z + 1)] != '\0')
			printf(", ");
		z++;
	}
	printf("\n");
}
