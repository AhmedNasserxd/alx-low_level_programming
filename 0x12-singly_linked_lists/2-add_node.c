#include "lists.h"

/**
*add_node - to add new node at the beginning
*@head: double pointer
*@str: new string to use
*Return: result
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *arr;
unsigned int i = 0;

while (str[i]);
i++;

new = malloc(sizeof(list_t));
if (!arr)
return (NULL);

new->str = strdup(str);
new->i = i;
new->next = (*head);
(*head) = new;

return (*head);
}
