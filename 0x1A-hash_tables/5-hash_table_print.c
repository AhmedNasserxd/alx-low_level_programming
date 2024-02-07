#include "hash_tables.h"

/**
*hash_table_print - Prints the key-value pairs of the hash table in order.
*
*@ht: The hash table
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int index = 0;
hash_node_t *current_node;
char *separator = "";

if (!ht || !ht->array)
return;

putchar('{');
while (index < ht->size)
{
current_node = ((ht->array)[index]);
while (current_node)
{
printf("%s'%s': '%s'", separator, current_node->key, current_node->value);
separator = ", ";
current_node = current_node->next;
}
index++;
}
puts("}");
}
