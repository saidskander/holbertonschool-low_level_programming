#include "holberton.h"
/**
  * clear_bit - clear_bit
  * @n: unsigned long int *n
  * @index: unsigned int index
  * Return: c
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int c;
*n = *n & ~(1 << index);
c = (index > 8 * sizeof(*n)) ? -1 : 1;
return (c);
}
