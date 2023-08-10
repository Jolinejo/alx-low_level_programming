#include "hash_tables.h"
/**
 * hash_table_print - Entry point
 * Description: print table
 * @ht: table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	unsigned long int cnt = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				cnt++;
				node = node->next;
			}
		}
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				cnt--;
				if (cnt != 0)
					printf(", ");
				node = node->next;
			}
		}
	}
	printf("}\n");
}
