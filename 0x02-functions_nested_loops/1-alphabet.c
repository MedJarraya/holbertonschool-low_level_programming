#include "holberton.h"
/**
 * print_alphabet - print alphabet
 *
 **/

void print_alphabet(void)
{
char alpha;

alpha  = 'a';
while (alpha <= 'z')
{
	_putchar (alpha);
	alpha++;
}
_putchar ('\n');
}
