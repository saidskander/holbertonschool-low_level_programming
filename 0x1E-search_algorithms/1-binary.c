#include "search_algos.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @array : input
 * @start : size_t start
 * @end : size_t end
 */
void print_array(int *array, size_t start, size_t end)
{
unsigned int x = start;
printf("Searching in array: ");
for (; x < end; x++)
{
printf("%i, ", array[x]);
}
printf("%i\n", array[x]);
}
/**
 * binary_search - binary_search
 * @array: input
 * @size: size_t start
 * @value: search value
 * Return: found or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
unsigned int job, start, end;
if (!array)
return (-1);
start = 0;
end = size - 1;
while (start <= end)
{
print_array(array, start, end);
job = (start + end) / 2;
if (value > array[job])
start = job + 1;
else if (value < array[job])
end = job - 1;
else
return (job);
}
return (-1);
}
