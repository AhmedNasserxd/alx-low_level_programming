#include "hash_tables.h"

/**
*create_and_add_node - Allocates memory and sets values.
*
*@ht: The hash table
*@key: The key (cannot be an empty string)
*@value: The value
*@idx: The index to insert at in the hash table array
*Return: 1 if success, 0 if failure
*/
int create_and_add_node(hash_table_t *ht, const char *key, const char *value,
unsigned long int idx)
{
hash_node_t *new_node = NULL;
char *new_key;
char *new_value;

new_node = malloc(sizeof(hash_node_t));
if (!new_node)
return (0);

new_key = strdup(key);
if (!new_key)
{
free(new_node);
return (0);
}

new_value = strdup(value);
if (!new_value)
{
free(new_key);
free(new_node);
return (0);
}

new_node->key = new_key;
new_node->value = new_value;

if ((ht->array)[idx] == NULL)
new_node->next = NULL;
else
new_node->next = (ht->array)[idx];
(ht->array)[idx] = new_node;

return (1);
}

/**
*hash_table_set - Adds an element to a hash table.
*
*@ht: The hash table
*@key: The key (cannot be an empty string)
*@value: The value
*Return: 1 if success, 0 if failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
/* Calculate index */
/* If key already exists, update value and return */
/* Else, create node */
/* Set ht index pointer to node, else add node to front if collision */

unsigned long int index;
hash_node_t *node = NULL;
char *new_value;

if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
return (0);

index = key_index((const unsigned char *)key, ht->size);

node = (ht->array)[index];
while (node && (strcmp(key, node->key) != 0))
node = node->next;
if (node != NULL)
{
new_value = strdup(value);
if (!new_value)
return (0);
if (node->value)
free(node->value);
node->value = new_value;
return (1);
}

return (create_and_add_node(ht, key, value, index));
}
