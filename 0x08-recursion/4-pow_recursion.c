#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - check the code for Holberton School students.
 * @x : pow x.
 * @y : pow y.
 * Return: .
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
else
return (x * _pow_recursion(x, (y - 1)));
}
