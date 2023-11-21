#include "lists.h"

/**
*add_nodeint - to add new node at the beginning of linked list
*@head: pointer to head of linked list
*@n: adding new node
*Return: result
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newn;

newn = malloc(sizeof(listint_t));

if (newn == NULL)
return (NULL);

newn->n = n;

new_node->next = *head;
*head = newn;

return (newn);
}
