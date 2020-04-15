#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _realloc - _realloc
 * @ptr: ptr
 * @old_size: old
 * @new_size: new
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *dcs;
char *sr;
unsigned int x = 0;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
ptr = malloc(new_size);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
dcs = malloc(new_size);
if (dcs == NULL)
return (NULL);
sr = ptr;
for (; x < new_size && x < old_size; x++)
dcs[x] = sr[x];
free(ptr);
return (dcs);
}
