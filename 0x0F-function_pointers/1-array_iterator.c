#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - array_iterator
 * @size: size-t
 * @array : int pointe
 * @action : void pointer
 * Return: .
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;
if (array != NULL && action != NULL)
{
for (x = 0; x < size; x++)
action(array[x]);
return;
}
}
