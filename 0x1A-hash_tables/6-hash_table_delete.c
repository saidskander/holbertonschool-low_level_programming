#include "hash_tables.h"
/**
 * hash_table_delete -  hash_table_delete
 * @ht: hash_table_t *ht
  */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node;
hash_node_t *temp;
unsigned long int x = 0;
if (ht == NULL)
return;
for (; x < ht->size; x++)
{
if (ht->array[x] != NULL)
{
node = ht->array[x];
for (; node; temp = node->next)
{
if (node->key)
free(node->key);
if (node->value)
free(node->value);
free(node);
node = temp;
}
}
}
free(ht->array);
free(ht);
}
