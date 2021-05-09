#include "lists.h"
/**
* add_dnodeint_end - print list
* @head: doubly list print
* @n: var
* Return: nulbers of elements
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *end = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (*head);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = node;
	node->prev = end;
	return (node);
}
