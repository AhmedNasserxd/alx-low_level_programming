#include "hash_tables.h"

/**
*key_index - Retrieves the index of a key in a hash table array.
*
*@key: The key to hash
*@size: The size of the hash table array
*Return: The index where the key/value pair is stored in the hash table array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;

if (size == 0)
return (0);

/* Calculate the hash value for the key */
index = hash_djb2(key);

/* Determine the index where the key/value pair should be stored */
return (index % size);
}
