#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
int x;
int i;
n = n - 1;
for (i = 0; i <= n; i++)
{
x = a[i];
a[i] = a[n];
a[n] = x;
n--;
}
}
