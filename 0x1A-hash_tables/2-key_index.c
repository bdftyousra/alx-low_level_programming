#include "hash_tables.h"
/**
 * key_index - Gives you the index of a key
 * @key: key
 * @size: size of the array
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (!key || !size)
	{
		return (0);
	}
	idx = hash_djb2(key) % size;
	return (idx);
}
