#include "lists.h"

/**
*print_listint_safe - to print a linked list including memory addresses
*@head: linked list
*Return: result
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
size_t count = 0;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);

count++;
if (current <= current->next)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
break;
}

current = current->next;
}

return (count);
}
