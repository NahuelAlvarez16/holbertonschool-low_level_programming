#include "hash_tables.h"
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *shash_table;

	shash_table = malloc(sizeof(shash_table_t));
	if (!shash_table)
		return (NULL);
	shash_table->size = size;
	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	shash_table->shead = NULL;
	shash_table->stail = NULL;
	if (!shash_table->array)
	{
		free(shash_table);
		return (NULL);
	}
	while (i < size)
	{
		shash_table->array[i] = NULL;
		i++;
	}
	return (shash_table);
