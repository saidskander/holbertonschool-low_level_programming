#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_print - func prints hash table.
 * @ht : const hash table
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int x;
hash_node_t *node;
int ind = 0;
if (ht == NULL)
return;
printf("{");
if (ht)
{
for (x = 0; x < ht->size; x++)
{
node = ht->array[x];
while (node != NULL)
{
if (ind == 1)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
ind = 1;
node = node->next;
}
}
}
printf("}\n");
}
