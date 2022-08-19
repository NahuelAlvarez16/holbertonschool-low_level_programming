#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table.
 * @size: size of new hash table.
 * Return: return a pointer to new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_node_s) * size);
	return (hash_table);
}
