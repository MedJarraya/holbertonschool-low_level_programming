#include "lists.h"
/**
 * add_node - node added to the list
 * @head: header
 * @str: constant charactere
 * Return: Node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int k;
	list_t *Node;
	char *s;

	Node = malloc(sizeof(size_t));
	if (Node == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (str[k] != '\0')
		k++;
	s = strdup(str);
	Node->str = s;
	Node->len = k;
	Node->next = *head;
	*head = Node;
	return (Node);
}
