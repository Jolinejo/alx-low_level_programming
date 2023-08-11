#include "hash_tables.h"

/**
 * hash_table_create - Entry point
 * Description: creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_t;
	unsigned long int i;

	hash_t = malloc(sizeof(shash_table_t));
	if (hash_t == NULL)
		return (NULL);
	hash_t->array = malloc(size * sizeof(shash_node_t *));
	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}
	hash_t->size = size;
	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;
	hash_t->shead = NULL;
	hash_t->stail = NULL;
	return (hash_t);
}

/**
 * insert_node - Entry point
 * Description: insert sorted
 * @head: head
 * @number: n
 * Return: nothing
 */
shash_node_t *insert_node(shash_node_t **head, shash_node_t *new, shash_node_t **stail)
{
	shash_node_t *curr = *head;

	if (new == NULL)
		return (NULL);
	new->sprev = NULL;
	new->snext = NULL;
	if (*head == NULL || strcmp((*head)->key, new->key) > 0)
	{
		new->snext = *head;
		if (*head != NULL)
			(*head)->sprev = new;
		*head = new;
		return (new);
	}
	while (strcmp(curr->key, new->key) < 0 && curr->snext != NULL)
	{
		curr = curr->snext;
	}
	if (strcmp(curr->key, new->key) < 0)
	{
		curr->snext = new;
		new->sprev = curr;
		*stail = new;
	}
	else
	{
		new->snext = curr;
		new->sprev = curr->sprev;
		if (new->sprev != NULL)
			new->sprev->snext = new;
		curr->sprev = new;
	}
	return (new);
}

/**
 * add_node - Entry point
 * Description: to add node
 * @head: head
 * @value: string
 * @key: key
 * Return: int
 */
shash_node_t *add_node(shash_node_t **head, const char *value, const char *key, shash_table_t *ht)
{
	shash_node_t *new = malloc(sizeof(shash_node_t));
	shash_node_t *curr = *head;

	if (new == NULL || head == NULL)
		return (NULL);
	if (*head != NULL)
	{
		while (curr != NULL)
		{
			if (strcmp(key, curr->key) == 0)
			{
				free(curr->value);
				curr->value = strdup(value);
				free(new);
				return (curr);
			}
			curr = curr->next;
		}
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;
	insert_node(&(ht->shead), new, &(ht->stail));
	return (new);

}
/**
 * hash_table_set - Entry point
 * Description: adds a node
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: nothing
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);
	if (ht->array == NULL || value == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	node = add_node(&(ht->array[idx]), value, key, ht);
	if (node == NULL)
		return (0);
	return (1);
}


/**
 * hash_table_get - Entry point
 * Description: gets val
 * @ht: hash table
 * @key: key
 * Return: value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * hash_table_print - Entry point
 * Description: print table
 * @ht: table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	
	if (ht == NULL)
		return;
	node = ht->shead;
	printf("{");
	while(node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
		node = node->snext;
	}
	printf("}\n");
}
/**
 * hash_table_print - Entry point
 * Description: print table
 * @ht: table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
		node = node->sprev;
	}
	printf("}\n");
}
/**
 * free_list- Entry point
 * Description: frees list
 * @head: head
 * Return: nothing
 */
void free_list(shash_node_t *head)
{
	shash_node_t *temp1 = head;
	shash_node_t *temp2;

	if (head == NULL)
		return;
	while (temp1)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2->key);
		free(temp2->value);
		free(temp2);
	}
}
/**
 * hash_table_delete - Entry point
 * Description: deletes table
 * @ht: hash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			free_list(node);
		}
	}
	free(ht->array);
	free(ht);
}
