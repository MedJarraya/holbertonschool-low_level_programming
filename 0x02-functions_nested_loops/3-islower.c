#include "holberton.h"
/**
 * _islower - checks if caracter is lowercase
 * Return: 1 if c is lowercase else return 0
 * @c: caracter to run the hecker on
 **/

int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
return (1);
else
return (0);
}
