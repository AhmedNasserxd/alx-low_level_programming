#include "lists.h"

/**
*delete_nodeint_at_index - to delete the node at the specified index of linked list
*@head: linked list to use
*@index: index to use
*Return: result
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head;
listint_t *previous = NULL;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = current->next;
}
else
{
for (i = 0; i < index && current != NULL; i++)
{
previous = current;
current = current->next;
}

if (current == NULL)
return (-1);

previous->next = current->next;
}

free(current);
return (1);
}
