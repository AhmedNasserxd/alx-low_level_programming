#include "hash_tables.h"

/**
*hash_table_get - Retrieves the value associated with a given key.
*
*@ht: The hash table
*@key: The key
*Return: The value associated with the key, or NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *temp;

/* Find the index in the hash table where the key is */
/* Traverse the linked list to find the matching key for the value */

if (!ht || !key)
return (NULL);
index = key_index((const unsigned char *)key, ht->size);

temp = (ht->array)[index];
while (temp != NULL && strcmp(temp->key, key) != 0)
temp = temp->next;
if (!temp)
return (NULL);
else
return (temp->value);
}
