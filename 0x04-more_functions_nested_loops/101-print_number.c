#include "holberton.h"
/**
*print_number - print
*@n: int
* Return: int to print
*/
void print_number(int n)
{
int z = 1;
unsigned int i, j;

if (n < 0)
{
_putchar('-');
j = -n;
}
else
{
j = n;
}
i = j / 10;
while (i != 0)
{
i /= 10;
z *= 10;
}
while (z != 1)
{
_putchar((j / z) +'0');
j %= z;
z /= 10;
}
_putchar(j + '0');
}
