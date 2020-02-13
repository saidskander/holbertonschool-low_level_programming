#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - check the code for Holberton School students.
 * @n : var
 * Return: Always 0.
 */
void print_to_98(int n)
{
int x;
if (n < 98)
{
for (x = n; x < 98; x++)
printf("%d, ", x);
}
else if (n > 98)
{
for (x = n; x > 98; x--)
printf("%d, ", x);
}
printf("98\n");
}
