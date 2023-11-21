#include "lists.h"

/**
*sum_listint - to return sum of a linked list
*@head: linked list to use
*Return: the sum
*/

int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
