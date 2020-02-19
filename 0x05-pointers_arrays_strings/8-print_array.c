#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 * @a : input
 * @n : .
 * Return: .
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
if (x == n - 1)
printf("%d\n", a[x]);
else
printf("%d, ", a[x]);
}
if (a[x] == '\0')
printf("\n");
}
