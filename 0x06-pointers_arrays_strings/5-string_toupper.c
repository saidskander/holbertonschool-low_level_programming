#include "holberton.h"
#include <stdio.h>
/**
 * *string_toupper - check the code for Holberton School students.
 *
 * Return: lower to upper.
 */
char *string_toupper(char *x)
{
int i;
for (i = 0; x[i] != '\0'; i++)
{
if (x[i] >= 'a' && x[i] <= 'z')
{
x[i] = x[i] - 32;
}
}
return (x);
}
