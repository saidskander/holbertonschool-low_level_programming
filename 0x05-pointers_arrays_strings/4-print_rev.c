#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @s : input variable
 * Return: 0.
 */
void print_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
i = i - 1;
for (; i >= 0; i--)
{
_putchar (s[i]);
}
_putchar ('\n');
}
