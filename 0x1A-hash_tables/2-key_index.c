#include "hash_tables.h"

/**
 * key_index - change hash code to array index
 * @size: size of array
 * @key: key to be indexed
 * Return: index of key entered
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
