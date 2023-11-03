#include "hash_tables.h"

/**
 * key_index - this will get the index
 * @key: this is the key which gets the index
 * @size: this is the arrays size
 *
 * Return: the index at which the key/value pair,
 * should be stored in the array of the hash table
 * Description: this will use the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}