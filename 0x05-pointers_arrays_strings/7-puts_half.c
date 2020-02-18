#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 * @str : input
 * Return: .
 */
void puts_half(char *str)
{
int x;
int i;
for (x = 0; str[x] != '\0'; x++)
if (x % 2 == 0)
{
i = x / 2;
}
else
{
i = (x - 1) / 2;
}
i++;
for (; i < x; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
