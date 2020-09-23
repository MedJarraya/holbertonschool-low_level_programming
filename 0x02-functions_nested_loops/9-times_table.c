#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0
 **/
void times_table(void)
{
int i = 0, j = 0;

while (i < 10)
{
while (j < 9)
{
if (i * j < 10)
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(i * j + 48);
}
else
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar(i * j / 10 + 48);
_putchar(i * j % 10 + 48);
}
j++;
}
if ((i * j) < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(i * j + 48);
}
else
{
_putchar(',');
_putchar(' ');
_putchar(i * j / 10 + 48);
_putchar(i * j % 10 + 48);
}
j = 0;
_putchar('\n');
i++;
}
}
