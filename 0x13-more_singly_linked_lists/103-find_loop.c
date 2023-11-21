#include "lists.h"

/**
*find_listint_loop - to find the loop in a linked list
*@head: linked list
*Return: result
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *first = head, *second = head;

if (!head)
return (NULL);

do
{
if (!second || !(second->next))
return (NULL);

second = second->next->next;
first = first->next;
}
while (second != first);

first = head;
while (first != second)
{
first = first->next;
second = second->next;
}

return (second);
}
