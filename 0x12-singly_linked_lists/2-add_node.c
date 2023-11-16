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
unsigned int len = 0;

while (str[len]);
len++;

arr = malloc(sizeof(list_t));
if (!arr)
return (NULL);

arr->str = strdup(str);
arr->len = len;
arr->next = (*head);
(*head) = arr;

return (*head);
}
