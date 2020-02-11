#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @l : Var l
 * Return: last digit l.
 */
int print_last_digit(int l)
{
int lenth = l % 10;
if (lenth < 0)
lenth = -lenth;
_putchar(lenth + '0');
return (lenth);
}
