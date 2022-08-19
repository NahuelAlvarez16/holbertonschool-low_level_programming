#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: is the hash table you want to add or update the key/value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *current_node;
	int print_counter = 0;

	if (ht)
	{
		putchar('{');
		while (i < ht->size)
		{
		current_node = ht->array[i];
		while (current_node)
		{
			if (print_counter > 0)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			current_node = current_node->next;
			print_counter++;
		}
		i++;
		}
		printf("}\n");
	}
}
