#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0
 **/
void times_table(void)
{
int i = 0, j = 0, x;

while (i < 10)
{
while (j < 10)
{
x = u * i;
if (x < 10)
{
if (x != 0)
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
j++;
}
_putchar('\n');
i++;
}
}
