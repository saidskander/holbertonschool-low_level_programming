#include "hash_tables.h"
/**
 * hash_table_delete -  hash_table_delete
 * @ht: hash_table_t *ht
  */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node;
unsigned long int x = 0;
if (!ht)
return;
for (; x <= ht->size; x++)
{
if (ht->array[x])
{
while (ht->array[x])
{
node = ht->array[x]->next;
free(ht->array[x]->value);
free(ht->array[x]->key);
free(ht->array[x]);
ht->array[x] = node;
}
}
}
free(ht->array);
free(ht);
}
