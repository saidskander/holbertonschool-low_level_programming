#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 * @str : str input
 * Return: .
 */
void _puts(char *str)
{
int i;
for (i = 0 ; str[i] != '\0'; i++)
_putchar (str[i]);
_putchar ('\n');
}
