#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
/**
 * linear_search - linear_search
 * @array: int *array search
 * @size_t: size_t size array
 * @value: int value
 * Return: first valueb or -1
 */
int linear_search(int *array, size_t size, int value)
{
unsigned int x = 0;
if (!array)
return (-1);
for (; x < size; x++)
{
printf("Value checked array[%u] = [%d]\n", x, array[x]);
if (array[x] == value)
return (x);
}
return (-1);
}
