#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: a new created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;
	unsigned long int idx;

	if (size == 0)
		return (NULL);

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);

	new_hash->size = size;

	new_hash->array = malloc(sizeof(new_hash->array) * size);
	if (new_hash->array == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
	{
		new_hash->array[idx] = NULL;
	}
	return(new_hash);
}
