#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new_hash_node;

	if (!ht)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_hash_node = malloc(sizeof(hash_node_t));
	if (!new_hash_node)
	{
		return (0);
	}
	new_hash_node->key = strdup((char *)key);
	new_hash_node->value = strdup((char *)value);

	if (!ht->array[index] || strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index] = new_hash_node;
	}
	else
	{
		new_hash_node->next = ht->array[index];
		ht->array[index] = new_hash_node;
	}
	return (1);
}
