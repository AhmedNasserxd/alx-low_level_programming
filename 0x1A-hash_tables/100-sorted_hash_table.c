#include "hash_tables.h"

/**
*create_sorted_hash_table - Creates a sorted hash table with given size.
*
*@size: The size of the hash table
*
*Return: A pointer to the created hash table; NULL if an error occurs
*/
shash_table_t *create_sorted_hash_table(unsigned long int size)
{
shash_table_t *sorted_ht;
shash_node_t **array;
unsigned long int i = 0;

if (size == 0)
return (NULL);

sorted_ht = malloc(sizeof(shash_table_t));
if (!sorted_ht)
return (NULL);
array = malloc(sizeof(*array) * size);
if (!array)
{
free(sorted_ht);
return (NULL);
}
while (i < size)
{
array[i] = NULL;
i++;
}

sorted_ht->size = size;
sorted_ht->array = array;
sorted_ht->shead = NULL;
sorted_ht->stail = NULL;

return (sorted_ht);
}

/**
*insert_to_sorted_list - Inserts a node into the sorted linked list of a
*sorted hash table.
*
*@ht: The sorted hash table
*@node: The node to insert
*
*Return: 1 if the operation is successful, 0 otherwise
*/
int insert_to_sorted_list(shash_table_t *ht, shash_node_t *node)
{
shash_node_t *temp;

if (!(ht->shead))
{
ht->shead = node;
ht->stail = node;
return (1);
}
if (strcmp(node->key, (ht->shead)->key) <= 0)
{
node->snext = ht->shead;
(ht->shead)->sprev = node;
ht->shead = node;
}
else if (strcmp(node->key, (ht->stail)->key) > 0)
{
node->sprev = ht->stail;
(ht->stail)->snext = node;
ht->stail = node;
}
else
{
temp = ht->shead;
while (temp->snext && strcmp(node->key, (temp->snext)->key) > 0)
temp = temp->snext;
node->snext = temp->snext;
node->sprev = temp;
(temp->snext)->sprev = node;
temp->snext = node;
}
return (1);
}

/**
*create_and_add_node - Mallocs, sets values, and inserts a node into a
*sorted hash table.
*
*@ht: The sorted hash table
*@key: The key; cannot be an empty string
*@value: The value
*@idx: The index to insert the node at in the hash table
*
*Return: 1 if the operation is successful, 0 otherwise
*/
int create_and_add_node(shash_table_t *ht, const char *key, const char *value,
unsigned long int idx)
{
shash_node_t *node = NULL;
char *new_key;
char *new_value;

node = malloc(sizeof(shash_node_t));
if (!node)
return (0);

new_key = strdup(key);
if (!new_key)
{
free(node);
return (0);
}

new_value = strdup(value);
if (!new_value)
{
free(new_key);
free(node);
return (0);
}

node->key = new_key;
node->value = new_value;
node->next = NULL;
node->sprev = NULL;
node->snext = NULL;

if (!(ht->array)[idx])
node->next = NULL;
else
node->next = (ht->array)[idx];
(ht->array)[idx] = node;

return (insert_to_sorted_list(ht, node));
}

/**
*shash_table_set - Adds an element to a sorted hash table.
*
*@ht: The sorted hash table
*@key: The key; cannot be an empty string
*@value: The value
*
*Return: 1 if the operation is successful, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
shash_node_t *node = NULL;
char *new_value;

if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
return (0);

idx = key_index((const unsigned char *)key, ht->size);

node = (ht->array)[idx];
while (node && strcmp(key, node->key) != 0)
node = node->next;
if (node)
{
new_value = strdup(value);
if (!new_value)
return (0);
if (node->value)
free(node->value);
node->value = new_value;
return (1);
}

return (create_and_add_node(ht, key, value, idx));
}

/**
*shash_table_get - Retrieves the value associated with a key in a sorted
*hash table.
*
*@ht: The sorted hash table
*@key: The key
*
*Return: The value associated with the key; NULL if the key is not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int idx;
shash_node_t *temp;

if (!ht || !key)
return (NULL);
idx = key_index((const unsigned char *)key, ht->size);

temp = (ht->array)[idx];
while (temp && strcmp(temp->key, key) != 0)
temp = temp->next;
if (!temp)
return (NULL);
return (temp->value);
}

/**
*shash_table_print - Prints the key/value pairs of a sorted hash table in
*ascending order.
*
*@ht: The sorted hash table
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;
char *comma = "";

if (!ht || !ht->array)
return;

putchar('{');
node = ht->shead;
while (node)
{
printf("%s'%s': '%s'", comma, node->key, node->value);
comma = ", ";
node = node->snext;
}
puts("}");
}

/**
*shash_table_print_rev - Prints the key/value pairs of a sorted hash table in
*reverse order.
*
* @ht: The sorted hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;
char *comma = "";

if (!ht || !ht->array)
return;

putchar('{');
node = ht->stail;
while (node)
{
printf("%s'%s': '%s'", comma, node->key, node->value);
comma = ", ";
node = node->sprev;
}
puts("}");
}

/**
*shash_table_delete - Frees and deletes a sorted hash table.
*
*@ht: The sorted hash table
*/
void shash_table_delete(shash_table_t *ht)
{
unsigned long int idx = 0;
shash_node_t *node, *next_node;

if (!ht)
return;

if (!(ht->array))
{
free(ht);
return;
}

while (idx < ht->size)
{
node = (ht->array)[idx];
while (node)
{
next_node = node->next;
if (node->key)
free(node->key);
if (node->value)
free(node->value);
free(node);
node = next_node;
}
idx++;
}
free(ht->array);
free(ht);
}
