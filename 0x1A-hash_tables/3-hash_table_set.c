#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - set an element to the hash table.
 * @ht : hash_table_t
 * @key : const char
 * @value : const char
 * Return: succeed = 1 other = 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int x;
hash_node_t *tmp;
hash_node_t *node;

if (!key || !ht || !value)
return (0);

x = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[x];

for (; tmp; tmp = tmp->next)
{
if (tmp && strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = strdup(value);
if (tmp->value == NULL)
return (0);
return (1);
}
}

node = malloc(sizeof(hash_node_t));
if (node == NULL)
return (0);
node->key = strdup(key);
if (node->key == NULL)
{
free(node->key);
return (0);
}
node->value = strdup(value);
if (node->value == NULL)
{
free(node->value);
return (0);
}
node->next = ht->array[x];
ht->array[x] = node;
return (1);
}
