#include "hash_tables.h"

/**
 * key_index - computes the index for a given key
 * @key: pointer to the key
 * @size: size of the hash table array
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
