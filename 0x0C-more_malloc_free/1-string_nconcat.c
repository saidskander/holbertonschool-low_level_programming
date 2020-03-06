#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - check the code for Holberton School students.
 * @s1 : char s1.
 * @s2 : char s2.
 * @n : unsigned int n* Return: x.
 * Return: x.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int m;
unsigned int l;
unsigned int i;
unsigned int u;
char *x;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] ; i++)
;
for (u = 0; s2[u] ; u++)
;
if (u >= n)
u = n;
x = malloc((i + u + 1) * sizeof(char));
if (x == NULL)
return (NULL);
for (l = 0; l < i; l++)
x[l] = s1[l];
for (m = 0; m < u; m++)
x[i + m] = s2[m];
x[i + u] = '\0';
return (x);
}
