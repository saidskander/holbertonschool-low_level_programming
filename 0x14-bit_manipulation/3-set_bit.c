#include "holberton.h"
#include <stdio.h>
/**
*set_bit - set_bit
*@n: unsigned long int *n
*@index: unsigned int index
*Return: -1 or 1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int set;
set = (1 << index) | *n;
if (index > 31)
{
return (-1);
}
else
{
*(n) = set;
}
return (1);
}

