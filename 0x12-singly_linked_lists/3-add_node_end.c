#include "lists.h"
/**
 * add_node_end - add a node to the end of the list
 * @head: variable
 * @str: constante char
 * Return: Node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *Node;
	list_t **temp;
	char *s;

	temp = head;
	Node = malloc(sizeof(size_t));
	if (Node == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	while (*temp)
	{
		temp = &(*temp)->next;
	}
	s = strdup(str);
	Node->str = s;
	Node->len = i;
	Node->next = *temp;
	*temp = Node;
	return (Node);
}
