#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_print - func prints hash table.
 * @ht : const hash table
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned int x = 0;
int begin = 0;
if (!ht)
return;
printf("{");
for (; x <= ht->size; x++)
{
if (ht->array[x])
{
while (ht->array[x])
{
if (begin != 0)
printf(", ");
printf("'%s': '%s'", ht->array[x]->key, ht->array[x]->value);
begin = 1;
ht->array[x] = ht->array[x]->next;
}
}
}
printf("}\n");
}
