#include <stdio.h>
#include "holberton.h"
/**
*print_binary - print_binary
*@n: unsigned long int n
*Return: void print_binary
*/
void print_binary(unsigned long int n)
{
if (n >= 2)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
