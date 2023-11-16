#include "lists.h"

/**
*add_node_end - to add a new node at the end of a linked list
*@head: Double pointer to use
*@str: string to duplicate
*Return: result
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *current_node, *new_node;
size_t str_length;

current_node = *head;

while (current_node && current_node->next != NULL)
current_node = current_node->next;

str_length = strlen(str);

new_node = malloc(sizeof(list_t));

if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);

if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = str_length;
new_node->next = NULL;

if (current_node)
current_node->next = new_node;
else
*head = new_node;

return (new_node);
}
