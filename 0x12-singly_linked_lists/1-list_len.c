#include "lists.h"
/**
 * list_len - lists lenght
 * @h: variable
 * Return: lengths
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}
