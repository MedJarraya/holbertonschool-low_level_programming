#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * @n: int
 * Return: 0
 */
void print_to_98(int n)
{
int a;

	if (n < 98)
	{
		a = n;
		while (a <= 98)
		{
			if (a != 98)
			printf("%i, ", a);
			else
			printf("%i\n", a);
			a++;
		}
	}
	else
	{
		a = n;
		while (a >= 98)
		{
			if (a != 98)
			printf("%i, ", a);
			else
			printf("%i\n", a);
			a--;
		}
	}
}
