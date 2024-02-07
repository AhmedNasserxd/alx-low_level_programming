#include "hash_tables.h"

/**
*hash_table_create - creates a hash table with a given size
*@size: size of the hash table
*
*Return: pointer to the created hash table, or NULL if an error occurred
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;    /* Pointer to the hash table */
hash_node_t **array;    /* Pointer to the array of hash nodes */
unsigned long int i = 0; /* Index */

/* Check if size is valid */
if (size == 0)
return (NULL);

/* Allocate memory for the hash table structure */
table = malloc(sizeof(hash_table_t));
if (!table)
return (NULL);

/* Allocate memory for the array of hash nodes */
array = malloc(sizeof(*array) * size);
if (!array)
{
free(table);
return (NULL);
}

/* Initialize all elements of the array to NULL */
while (i < size)
{
array[i] = NULL;
i++;
}

/* Set the size and array of the hash table */
table->size = size;
table->array = array;

return (table);
}
