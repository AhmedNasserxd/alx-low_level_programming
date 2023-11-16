#include "lists.h"

/**
*list_len - to print length of a linked list
*@h: linked list to use
*Return: result
*/

size_t list_len(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
i++;
h = h->next;
}

return (i);
}
