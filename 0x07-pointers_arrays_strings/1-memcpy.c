#include "holberton.h"
#include <stdio.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n : input variable
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
