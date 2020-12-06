#include "lists.h"
/**
 * free_list - freelist
 * @head: variable
 */
void free_list(list_t *head)
{
	list_t *templist;

	while (head != NULL)
	{
		templist = head;
		head = head->next;
		free(templist->str);
		free(templist);
	}
}
