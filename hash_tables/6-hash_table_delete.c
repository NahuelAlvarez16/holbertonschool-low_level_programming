#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *current_node = NULL;
	hash_node_t *next_node = NULL;

	if (ht != NULL)
	{
		while (i < ht->size)
		{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			next_node = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = next_node;
		}
		i++;
		}
		free(ht->array);
		free(ht);
	}
}
