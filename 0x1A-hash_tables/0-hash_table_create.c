#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size : unsigned long intt
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *htc;
htc = malloc(sizeof(hash_table_t));
if (htc == NULL)
return (NULL);
htc->size = size;
htc->array = malloc(sizeof(htc->array) * size);
if (htc->array == NULL)
return (NULL);
return (htc);
}
