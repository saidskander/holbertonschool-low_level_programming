#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 * @s : input variable s
 * Return:.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s++);
_puts_recursion(s);
}