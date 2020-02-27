#include "holberton.h"
#include <stdio.h>
/**
 * factorial - check the code for Holberton School students.
 * @n : input variable
 * Return: .
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
return (n * factorial(n - 1));
}
