#include "holberton.h"
/**
 * jack_bauer - time jack_bauer
 * Return: sum.
 */
void jack_bauer(void)
{
int hr, mn;
for (hr = 0; hr < 24; hr++)
{
for (mn = 0; mn < 60; mn++)
{
_putchar((hr / 10) + '0');
_putchar((hr % 10) + '0');
_putchar(':');
_putchar((mn / 10) + '0');
_putchar((mn % 10) + '0');
_putchar('\n');
}
}
}
