#include "hash_tables.h"
/**
 * *hash_table_create - create a hash table
 * @size : unsigned long intt
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *htc;
unsigned long int x = 0;
htc = malloc(sizeof(hash_table_t));
if (htc == NULL)
return (NULL);
htc->array = malloc(sizeof(hash_node_t *) * size);
if (htc->array == NULL)
return (NULL);
for (; x < size; x++)
htc->array[x] = NULL;
htc->size = size;
return (htc);
}
