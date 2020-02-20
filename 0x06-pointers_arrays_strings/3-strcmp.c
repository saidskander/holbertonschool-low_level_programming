#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - check the code for Holberton School students.
 * @s1 : input var 
 * @s2 : input var
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int x;
for (x = 0 ; s1[x] != '\0' ; x++)
{
if (s1[x] < s2[x])
{
return (s1[x] - s2[x]);
}
if (s1[x] > s2[x])
{
return (s1[x] - s2[x]);
}
}
return (0);
}
