#include "lists.h"

/**
*listint_len - to return number of elements in linked list
*@h: list to use
*Return: result
*/

size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (h != NULL)
{
n++;
h = h->next;
}

return (n);
}
