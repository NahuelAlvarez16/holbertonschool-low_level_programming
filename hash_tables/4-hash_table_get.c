#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: is the hash table you want to add or update the key/value
 * @key: is the key you are looking for
 * Return: returns the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *current_node;

	if (!ht)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}
	return (NULL);
}
