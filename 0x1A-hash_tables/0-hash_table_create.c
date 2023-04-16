#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash tables
 * @size: size of the array
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int x;

	hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->array  = calloc(size, sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (x = 0; x<=size; x++)
	{
		hash_table->array[x] = NULL;
	}
	hash_table->size = size;
	return (hash_table);
}
