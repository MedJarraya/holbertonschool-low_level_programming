#include "lists.h"
/**
* print_dlistint - print list
* @l: doubly list print
* Return: nulbers of elements
*/
size_t print_dlistint(const dlistint_t *l)
{
size_t n = 0;
while (l)
{
printf("%d\n", l->n);
l = l->next;
n++;
}
return (n);
}
