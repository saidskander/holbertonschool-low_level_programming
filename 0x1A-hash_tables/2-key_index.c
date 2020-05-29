
#include "hash_tables.h"
/**
 * key_index - index key func.
 * @key : key
 * @size : size of the hash table
 * Return: keyinbox
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
