#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table.
 * @size: size of new hash table.
 * Return: return a pointer to new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if(!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}
	return (hash_table);
}
