#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new_hash_node;

	index = key_index((unsigned char *)key, ht->size);
	new_hash_node = malloc(sizeof(hash_node_t));
	if (!new_hash_node)
	{
		return (0);
	}
	new_hash_node->key = (char *)key;
	new_hash_node->value = (char *)value;

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
