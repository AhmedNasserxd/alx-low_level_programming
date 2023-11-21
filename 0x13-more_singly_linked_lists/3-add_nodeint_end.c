#include "lists.h"

/**
*add_nodeint_end - to add new node at the end of linked list
*@head: pointer to head of linked list
*@n: adding new node
*Return: result
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newn, *rcs;

newn = malloc(sizeof(listint_t));

if (!newn)
return (NULL);

newn->n = n;
newn->next = NULL;

if (*head == NULL)
*head = newn;

else
{
rcs = *head;

while (rcs->next != NULL)
rcs = rcs->next;
rcs->next = newn;
}

return (newn);
}
