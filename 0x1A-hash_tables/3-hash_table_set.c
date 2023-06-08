#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	hash_node_t *new = NULL;
	char *nvalue = NULL;
	char *nkey = NULL;
	unsigned long int idx = 0;

	if (!key || !ht || !(ht->array))
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	nvalue = strdup(value);
	node = ht->array[idx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = nvalue;
			return (1);
		}
		node = node->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(nvalue);
		return (0);
	}
	nkey = strdup(key);
	new->key = nkey;
	new->value = nvalue;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
