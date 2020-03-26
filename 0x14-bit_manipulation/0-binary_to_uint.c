#include "holberton.h"
#include <stdlib.h>
/**
*binary_to_uint - binary_to_uint
*@b: const char *b
*Return: s
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int x;
/*length of the bin*/
unsigned int r;
/*Room: to put the bit number of each operation*/
unsigned int s;
/*num of the sum return*/
unsigned int n;
/*use length of << n*/
if (b == NULL)
return (0);
for (x = 0; b[x] != '\0'; x++)
{
if (b[x] != '0' && b[x] != '1')
return (0);
}
s = 0;
for (n = 0; x; n++)
{
if (b[x - 1] == '1')
{
r = 1 << n;
s = s + r;
}
x--;
}
return (s);
}
