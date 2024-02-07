#include "hash_tables.h"

/**
*hash_djb2 - Implements the djb2 algorithm
*
*@str: The string to hash
*Return: The hash value for the given string
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash_value = 5381; /* Initial hash value */
int current_char; /* Current character */

/* Iterate through each character of the string */
while ((current_char = *str++))
{
/* Update the hash value */
hash_value = ((hash_value << 5) + hash_value) +current_char;
}

return (hash_value);
}
