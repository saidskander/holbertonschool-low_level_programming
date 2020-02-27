#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s : input a variable
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
int x = 0;
if (s[0] != '\0')
{
x = _strlen_recursion(s + 1);
x++;
}
return (x);
}
