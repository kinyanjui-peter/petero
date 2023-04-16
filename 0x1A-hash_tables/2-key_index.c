#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @size: size of the array
 * @key: key  to be stored
 * Return: index where key/value is stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;
	unsigned long int index;

	hash_val = hash_djb2(key);
	index = hash_val % size;
	return (index);
}
