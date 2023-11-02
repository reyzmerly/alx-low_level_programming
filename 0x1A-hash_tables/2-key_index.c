#include "hash_tables.h"

/**
 * key_index - Gett the index at which a key/value pair should
 *             BE stored iN a hash table.
 * @key: The key To Get the index of.
 * @size: The Size OF The array of the hash table.
 *
 * Return: The INDEX OF The key.
 *
 * Description: Uses The djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
