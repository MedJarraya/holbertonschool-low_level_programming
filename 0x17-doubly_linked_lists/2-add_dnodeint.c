#include "lists.h"
/**
* add_dnodeint - print list
* @head: doubly list print
* @n: var
* Return: nulbers of elements
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = node;
	*head = node;
	return (*head);
}
