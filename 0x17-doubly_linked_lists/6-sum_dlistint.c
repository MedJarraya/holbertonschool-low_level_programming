#include "lists.h"
/**
* sum_dlistint - print list
* @head: doubly list print
* Return: nulbers of elements
*/
int sum_dlistint(dlistint_t *head)
{
	int tot;
	dlistint_t *nodetot;

	if (head == NULL)
		return (0);
	nodetot = head;
	tot = 0;
	while (nodetot != NULL)
	{
		tot = tot + nodetot->n;
		nodetot = nodetot->next;
	}
	return (tot);
}
