#include "hash_tables.h"

/**
*hash_table_delete - Frees and deletes a hash table.
*
*@ht: The hash table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int index = 0;
hash_node_t *current_node, *next_node;

if (!ht)
return;

if (!(ht->array))
{
free(ht);
return;
}

while (index < ht->size)
{
current_node = (ht->array)[index];
while (current_node)
{
next_node = current_node->next;
if (current_node->key)
free(current_node->key);
if (current_node->value)
free(current_node->value);
free(current_node);
current_node = next_node;
}
index++;
}
free(ht->array);
free(ht);
}
