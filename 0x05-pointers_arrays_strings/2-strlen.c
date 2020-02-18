#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @a : input
 * @b : input
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int *c;
*c = *a;
*a = *b;
*b = *c;
}
