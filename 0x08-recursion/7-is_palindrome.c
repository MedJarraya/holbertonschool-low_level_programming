#include "holberton.h"
/**
 * _strlen - length
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}
/**
 * palin - palindrome or not
 * @l:ind
 * @r:ind
 * @p:str
 * Return: 1 palin / 0 not
 */
int palin(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (palin(l + 1, r - 1, p));
}
/**
 * is_palindrome - prints 1 pal / 0 if not
 * @s: str
 * Return: 1 is palin / 0 not
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (palin(0, i, s));
}
