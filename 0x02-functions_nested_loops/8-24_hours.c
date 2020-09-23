#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: (0)
 *
 **/
void jack_bauer(void)
{
int i = 0, j = 0;

while (i < 24)
{
while (j < 60)
{
_putchar(i / 10 + 48);
_putchar(i % 10 + 48);
_putchar(':');
_putchar(j / 10 + 48);
_putchar(j % 10 + 48);
_putchar('\n');
j++;
}
j = 0;
i++;
}
}
