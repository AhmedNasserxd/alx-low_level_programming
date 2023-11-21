#include "lists.h"

/**
*reverse_listint - to reverse linked list
*@head: linked list
*Return: result
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *n = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = n;
n = *head;
*head = next;
}

*head = n;

return (*head);
}
