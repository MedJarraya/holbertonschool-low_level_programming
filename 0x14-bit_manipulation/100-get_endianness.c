#include <stdio.h>
/**
 * get_endianness - print
 *
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *b = (char *)&z;

	if (*b)
		return (1);
	return (0);
}
