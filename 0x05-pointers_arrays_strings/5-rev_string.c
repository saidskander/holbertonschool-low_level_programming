#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s :input
 * Return: .
 */
void rev_string(char *s)
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
