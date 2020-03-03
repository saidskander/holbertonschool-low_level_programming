#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 * Return: NULL or X.
 */
char *create_array(unsigned int size, char c)
{
char *x;
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}
x = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
x[i] = c;
return (x);
}
