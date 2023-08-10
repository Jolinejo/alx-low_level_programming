#include "hash_tables.h"
/**
 * key_index - Entry point
 * Description: gives index of value
 * @key: key
 * @size: size of the array
 * Return: index of key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key);
	idx %= size;

	return (idx);
}
