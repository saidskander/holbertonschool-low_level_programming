#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - get_bit
 * @n: unsigned long int n
 * @index: unsigned int index
 * Return: n or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 101010101)
/*101010101 is a funny random DEC number and not a binary code number*/
return (-1);
n = n >> index & 1;
return (n);
}
