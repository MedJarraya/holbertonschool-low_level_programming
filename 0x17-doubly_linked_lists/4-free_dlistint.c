#include "lists.h"
/**
* free_dlistint - print list
* @head: doubly list print
* Return: nulbers of elements
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *empty = NULL;

	while (head != NULL)
	{
		empty = head->next;
		free(head);
		head = empty;
	}
	free(head);
}
