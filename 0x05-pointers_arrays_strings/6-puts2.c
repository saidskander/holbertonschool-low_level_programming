#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str : input .
 * Return: .
 */
void puts2(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x = x + 2)
{
_putchar(str[x]);
}
_putchar('\n');
}
