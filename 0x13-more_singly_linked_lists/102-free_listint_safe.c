#include "lists.h"

/**
*free_listint_safe - to free linked list and set the head to null
*@h: linked list
*Return: result
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *hold;
size_t c = 0;

current = *h;
while (current != NULL)
{
c++;
hold = current;
current = current->next;
free(hold);

if (hold < current)
break;
}
*h = NULL;

return (c);
}
