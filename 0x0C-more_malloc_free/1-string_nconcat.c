#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - check the code for Holberton School students.
 * @s1 : char s1.
 * @s2 : char s2.
 * @n : unsigned int n* Return: x.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
int m;
int l;
int i;
int u;
char *x;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (u = 0; s2[u] != '\0'; u++)
;

u = u + 1;
x = malloc((i + u) *sizeof(char));
if (u >= n)
u = n;
if (x == NULL)
return (NULL);
for (l = 0; s1[l] != '\0'; l++)
x[l] = s1[l];
for (m = 0; s2[m] != '\0'; m++)
x[i + m] = s2[m];
return (x);
}
