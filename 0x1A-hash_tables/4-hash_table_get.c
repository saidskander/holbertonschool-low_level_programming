#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - hash_table_get
 * @ht : const hash_table_t
 * @key : const char *key
 * Return: N.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *tmp;
unsigned long int htg;
if (!ht || !key)
return (NULL);
htg = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[htg];
for (; tmp; tmp = tmp->next)
{
if (strcmp(tmp->key, key) == 0)
return (tmp->value);
}
return (NULL);
}
