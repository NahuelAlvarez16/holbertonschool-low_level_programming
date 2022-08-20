#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = 0;
	hash_node_t *new_hash_node = NULL;

	if (!ht)
		return (0);
	index = key_index((unsigned char *)key, ht->size);


	new_hash_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	memset(new_hash_node, 0, sizeof(hash_node_t));
	if (new_hash_node == NULL)
	{
		return (0);
	}
	new_hash_node->key = strdup((char *)key);
	new_hash_node->value = strdup((char *)value);

	if (ht->array[index] == NULL || (strcmp(ht->array[index]->key, key) == 0))
	{
		if (ht->array[index])
		{
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
		}
		ht->array[index] = new_hash_node;
	}
	else
	{
		new_hash_node->next = ht->array[index];
		ht->array[index] = new_hash_node;
	}
	return (1);
}
