#include "lists.h"
/**
* get_dnodeint_at_index - print list
* @head: doubly list print
* @index: idx
* Return: nulbers of elements
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int k;

	node = head;
	k = 0;
	while (node != NULL)
	{
		if (k == index)
			return (node);
		node = node->next;
		k++;
	}
	return (NULL);
}