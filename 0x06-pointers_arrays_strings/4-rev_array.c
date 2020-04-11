#include "holberton.h"

/**
 * reverse_array - reverses_array
 * @a: a = integer array
 * @n: n = number of array to reverse
 *
 * return: void
 */
void reverse_array(int *a, int n)
{
int tmp;
int *ptr = a;
for (; &a[n--] > ptr; ptr++)
{
tmp = *ptr;
*ptr = a[n];
a[n] = tmp;
}
}
