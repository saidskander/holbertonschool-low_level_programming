
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: p
 */
int **alloc_grid(int width, int height)
{
int **x;
int h, k;
if (width <= 0 || height <= 0)
return  (NULL);
x = malloc(height * sizeof(int *));
if (x == NULL)
return (NULL);
for (h = 0; h < height; h++)
{
x[h] = malloc(width * sizeof(int));
if (x[h] == NULL)
{
for (k = 0; k < h; k++)
free(x[k]);
free(x);
return (NULL);
}
for (k = 0; k < width; k++)
x[h][k] = 0;
}
return (x);
}
