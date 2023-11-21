#include "lists.h"

/**
*print_listint - to print elements of a list
*@h: list node
*Return: result
*/

size_t print_listint(const listint_t *h)
{
size_t c = 0;

while (h != NULL)
{
printf("%d\n", h->n);
c++;
h = h->next;
}
return (c);
}
