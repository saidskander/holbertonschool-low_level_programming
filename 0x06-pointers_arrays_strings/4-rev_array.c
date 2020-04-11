#include "holberton.h"

/**
 * reverse_array - reverses_array
 * @a: a = integer array
 * @n: n = number of array to reverse
 * return: void
 */
void reverse_array(int *a, int n)
{
int tmp;
int *pra = a;
for (; &a[n--] > pra; pra++)
{
tmp = *pra;
*pra = a[n];
a[n] = tmp;
}
}
