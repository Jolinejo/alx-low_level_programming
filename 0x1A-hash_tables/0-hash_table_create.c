#include "hash_tables.h"
/**
 * hash_table_create - Entry point
 * Description: creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	hash_node_t **arr;
	unsigned long int i;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);
	*arr = malooc(size * sizeof(hash_node_t *));
	if (*arr == NULL)
	{
		free(hash_t);
		return (NULL);
	}
	hash_t->size = size;
	hash_t->array = arr;
	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;
	return (hash_t);
}
