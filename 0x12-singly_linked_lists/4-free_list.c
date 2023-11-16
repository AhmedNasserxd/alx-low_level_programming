#include "lists.h"

/**
*free_list - to free linked list
*@head: linked list to use
*/

void free_list(list_t *head)
{
while (head != NULL)
{
free(head->str);
free(head);
head = head->next;
}
}
