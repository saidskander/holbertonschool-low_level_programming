#include "holberton.h"
/**
 * print_times_table - print_times_table
 * @n: number table
 * return: void
*/
void print_times_table(int n)
{
int x = 0, j;
if (n < 16 && n >= 0)
{
for (; x <= n; x++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
_putchar(j + '0');
else if (j * x < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(j * x + '0');
}
else if (j * x < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((j * x) / 10 + '0');
_putchar((j * x) % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((j * x) / 100 + '0');
_putchar(((j * x) / 10) % 10 + '0');
_putchar((j * x) % 10 + '0');
}
}
_putchar('\n');
}
}
}
