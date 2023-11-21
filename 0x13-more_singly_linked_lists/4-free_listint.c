#include "lists.h"

/**
*free_listint - to free a linked list
*@head: linked list to use
*/

void free_listint(listint_t *head)
{
listint_t *freel;

while (head != NULL)
{
freel = head;
head = head->next;
free(freel);
}
}
