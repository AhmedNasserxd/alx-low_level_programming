#include "lists.h"

/**
*free_listint2 - to free a linked list
*@head: linked list to use
*/

void free_listint2(listint_t **head)
{
listint_t *freel;

if (head == NULL)
return;

while (*head != NULL)
{
freel = *head;
*head = (*head)->next;
free(freel);
}
}
