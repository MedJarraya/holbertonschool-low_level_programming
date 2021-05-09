#include "lists.h"
/**
* dlistint_len - print list
* @l: doubly list print
* Return: nulbers of elements
*/
size_t dlistint_len(const dlistint_t *l)
{
size_t n = 0;
while (l)
{
l = l->next;
n++;
}
return (n);
}
