#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_grid - prints a grid of integers
 * @: the address of the two dimensional grid
 * Return: Nothing.
 */
char *_strdup(char *str)
{
int i;
char *x;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
;
x = malloc((i + 1) * sizeof(char));
if (x == NULL)
return (NULL);
for (i =0; str[i]; i++)
{
x[i] = str[i];
}
x[i] = '\0';
return (x);
}
