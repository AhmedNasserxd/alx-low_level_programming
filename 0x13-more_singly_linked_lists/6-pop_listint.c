#include "lists.h"

/**
*pop_listint - to delete head node and return its data
*@head: linked list to use
*Return: head node's data
*/

int pop_listint(listint_t **head)
{
int data;
listint_t *rcs;

if (*head == NULL)
return (0);

rcs = *head;

data = rcs->n;
*head = rcs->next;
free(rcs);

return (data);
}
