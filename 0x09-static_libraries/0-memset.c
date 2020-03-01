#include "holberton.h"
#include <stdio.h>
/**
 * *_memset - prints buffer in hexa
 * @s: input var
 * @b: input var
 * @n: the unsigned int
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
