#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - check the code for Holberton School students.
 * @n : unsignedinput.
 * Return: return sum.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int x;
va_list var;
int sum = 0;
va_start(var, n);
if (n == 0)
{
return (0);
}
for (x = 0; x < n; x++)
{
sum += va_arg(var, unsigned int);
va_end(var);
}
return (sum);
}
