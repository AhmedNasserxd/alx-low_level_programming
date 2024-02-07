#include "hash_tables.h"

/**
 * shash_table_create - create sorted hash table given size
 *
 * @size: The size of the hash table
 *
 * Return: A pointer to the created hash table; NULL if an error occurs
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	shash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	ht->size = size;
	ht->array = array;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * insert_to_sorted_list - Inserts a node into the sorted linked list of a
 *                         sorted hash table.
 *
 * @ht: The sorted hash table
 * @node: The node to insert
 *
 * Return: 1 if the operation is successful, 0 otherwise
 */
int insert_to_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp;

	/* if empty hash table, initialize head and tail nodes */
	if (!(ht->shead))
	{
		ht->shead = node;
		ht->stail = node;
		return (1);
	}
	if (strcmp(node->key, (ht->shead)->key) <= 0) /* insert at beginning */
	{
		node->snext = ht->shead;
		(ht->shead)->sprev = node;
		ht->shead = node;
	}
	else if (strcmp(node->key, (ht->stail)->key) > 0) /* insert at end */
	{
		node->sprev = ht->stail;
		(ht->stail)->snext = node;
		ht->stail = node;
	}
	else /* insert in middle */
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(node->key, (tmp->snext)->key) > 0)
			tmp = tmp->snext;
		node->snext = tmp->snext;
		node->sprev = tmp;
		(tmp->snext)->sprev = node;
		tmp->snext = node;
	}
	return (1);
}

/**
 * create_and_add_node - Mallocs, sets values, and inserts a node into a
 *                       sorted hash table.
 *
 * @ht: The sorted hash table
 * @key: The key; cannot be an empty string
 * @value: The value
 * @idx: The index to insert the node at in the hash table
 *
 * Return: 1 if the operation is successful, 0 otherwise
 */
int create_and_add_node(shash_table_t *ht, const char *key, const char *value,
			unsigned long int idx)
{
	shash_node_t *node = NULL;
	char *k;
	char *v;
	(void) idx;
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(node);
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		free(node);
		return (0);
	}

	node->key = k;
	node->value = v;
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	if ((ht->array)[idx] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[idx];
	(ht->array)[idx] = node;

	return (insert_to_sorted_list(ht, node));
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 *
 * @ht: The sorted hash table
 * @key: The key; cannot be an empty string
 * @value: The value
 *
 * Return: 1 if the operation is successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	/* get index */
	/* if key already exists, update value and return */
	/* else create node */
	/* set ht idx ptr to node; else put in sorted linked list if collision*/

	unsigned long int idx;
	shash_node_t *node = NULL;
	char *v;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[idx];
	while (node && (strcmp(key, node->key) != 0))
		node = node->next;
	if (node != NULL)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (node->value)
			free(node->value);
		node->value = v;
		return (1);
	}

	return (create_and_add_node(ht, key, value, idx));
}

/**
 * shash_table_get - Retrieves the value associated with a key in a sorted
 *                   hash table.
 *
 * @ht: The sorted hash table
 * @key: The key
 *
 * Return: The value associated with the key; NULL if the key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *tmp;

	/* find index in hash table where key is */
	/* look through linked list to find matching key for value */

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);

	tmp = (ht->array)[idx];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	else
		return (tmp->value);
}

/**
 * shash_table_print - Prints the key/value pairs of a sorted hash table in
 *                     ascending order.
 *
 * @ht: The sorted hash table
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
 * shash_table_print_rev - Prints the key/value pairs of a sorted hash table in
 *                         reverse order.
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
 * shash_table_delete - Frees and deletes a sorted hash table.
 *
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int idx = 0;
	shash_node_t *node, *next;

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
			next = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			node->key = NULL;
			node->value = NULL;
			free(node);
			node = next;
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
