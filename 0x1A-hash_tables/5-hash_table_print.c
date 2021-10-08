#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	char *faker = "";
	
	if (ht == NULL)
		return;

	printf("{");
	while (idx < ht->size)
	{
		while (ht->array[idx] != NULL)
		{
			printf("%s'%s': '%s'", faker, ht->array[idx]->key, ht->array[idx]->value);
			faker = ", ";
			ht->array[idx] = ht->array[idx]->next;
		}
		idx++;
	}
	printf("}\n");
}
