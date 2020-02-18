#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 * @str : input .
 * Return: .
 */
void puts2(char *str)
{
int x;
int l = 0;
for (l = 0; str[l] != '\0'; l++)
;
for (x = 0; x < l ; x = x + 2)
{
_putchar(str[x]);
}
_putchar('\n');
}
