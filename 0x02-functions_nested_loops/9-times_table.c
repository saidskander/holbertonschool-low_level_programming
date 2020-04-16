#include "holberton.h"
/**
 * times_table - times_table
 * return:.
 */
void times_table(void)
{
int x = 0;
int nu;
for (; x <= 9; x++)
{
for (nu = 0; nu <= 9; nu++)
{
if (nu == 0)
{
_putchar(nu + '0');
}
else if (nu * x <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(nu * x + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((nu * x) / 10 + '0');
_putchar((nu * x) % 10 + '0');
}
}
_putchar('\n');
}
}
