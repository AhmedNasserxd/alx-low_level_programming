#include "lists.h"

/**
*get_nodeint_at_index - to return nth node of a linked list
*@head: linked list to use
*@index: index to use
*Return: pointer index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n;

if (!head)
return (NULL);
for (n = 0; n < index; n++)
{
head = head->next;
if (!head)
return (NULL);
}
return (head);
}
