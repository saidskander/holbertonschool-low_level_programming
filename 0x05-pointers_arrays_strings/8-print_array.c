#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 *
 * Return: .
 */
void print_array(int *a, int n)
{
int x;
x = 0;
for (x = 0; a[x] != '\0'; x++)
{
if (x == n - 1)
printf("%d\n", a[x]);
else if (x < n)
printf("%d, ", a[x]);
x++;
}
}
