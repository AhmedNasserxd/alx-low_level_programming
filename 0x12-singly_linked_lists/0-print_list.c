#include "lists.h"

/**
*print_list - to print elements of list
*@h: the linked list to use
*Return: result
*/

size_t print_list(const list_t *h)
{
size_t i = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
i++;
}
return (i);
}
