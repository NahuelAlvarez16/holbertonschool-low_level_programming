#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	
	index = key_index((unsigned char *)key, ht->size);
	ht->array[index] = malloc(sizeof(hash_node_t));
	ht->array[index]->key = (char *)key;
	ht->array[index]->value = (char *)value;
	return (1);
}
