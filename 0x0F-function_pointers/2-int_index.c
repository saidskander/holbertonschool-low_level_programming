#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @array : array pointer
 * @size : size.
 * @cmp : cmp pointer.
 * Return: .
 */
int int_index(int *array, int size, int (*cmp)(int))
{
unsigned int x;
if (array != NULL || cmp != NULL)
{
for (x = 0; x < size ; x++)
if (cmp(array[x]))
return (x);
}
if (size <= 0)
{
return (-1);
}
return (-1);
}
