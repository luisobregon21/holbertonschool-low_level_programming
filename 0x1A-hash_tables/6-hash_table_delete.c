#include "hash_tables.h"
/**
 * hash_table_delete - frees hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht->array);
		return;
	}

	while (idx < ht->size)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			if(tmp->key)
				free(tmp->key);
			if(tmp->value)
				free(tmp->value);
			free(tmp);
			tmp = tmp->next;
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
