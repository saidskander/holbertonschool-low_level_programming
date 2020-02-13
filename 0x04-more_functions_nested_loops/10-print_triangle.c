#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 * @size : input var
 * Return: .
 */
void print_triangle(int size)
{
int x;
int y;
int s;
if (size <= 0)
{
_putchar('\n');
}
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
s = size - x - 1;
if (y < s)
{
_putchar(' ');
}
else
_putchar('#');
}
_putchar('\n');
}
}
