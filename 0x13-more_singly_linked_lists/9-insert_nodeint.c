#include "lists.h"

/**
*insert_nodeint_at_index - to insert a new node in a linked list
*@head: linked list to use
*@idx: index to use
*@n: data to use
*Return: result
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node, *temp;

new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

temp = *head;
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
else
temp = temp->next;
}

return (NULL);
}
