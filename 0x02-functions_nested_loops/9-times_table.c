#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0
 **/
void times_table(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
		x = j * i;
			if (x < 10)
				{
				if (j != 0)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					}
				_putchar(x + '0');
				}
			else
				{
				if (j != 0)
					{
					_putchar(',');
					_putchar(' ');
					}
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				}
		}
	    _putchar('\n');
	}
}
