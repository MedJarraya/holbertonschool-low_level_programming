#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @LD: lastdigit
 * Return: the value of the last digit
 **/

int print_last_digit(int LD)
{
LD = (LD % 10);
if (LD < 0)
LD = (LD * -1);
_putchar(LD + '0');
return (LD);
}
