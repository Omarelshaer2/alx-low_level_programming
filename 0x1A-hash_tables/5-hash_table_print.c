#include "hash_tables.h"
/**
  * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: is the key you are looking for
 */
void hash_table_print(const hash_table_t *ht)
{

unsigned long int i;
hash_node_t *node;
short int comma = 0;

if (ht == NULL)
	return;

putchar('{');
for (i = 0; i < ht->size; i++)
{
	node = ht->array[i];
	while (node != NULL)
	{
		if (comma)
			printf(", ");

		printf("'%s': '%s'", node->key, node->value);
		node = node->next;

		if (comma == 0)
			comma = 1;
	}
}
printf("}\n");
}
