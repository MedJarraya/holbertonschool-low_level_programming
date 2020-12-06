#include <stdio.h>
#include "lists.h"
void first_is_first(void) __attribute__ ((constructor));
/**
 * first_is_first - prints first_is_first
 */
void first_is_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
