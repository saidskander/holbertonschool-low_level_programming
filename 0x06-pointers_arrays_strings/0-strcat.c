#include "holberton.h"
#include <stdio.h>
/**
 * *_strcat - check the code for Holberton School students.
 * @dest : input
 * @src : input
 * Return: .
 */
char *_strcat(char *dest, char *src)
{
int x;
int i;
for (i = 0; dest[i] != '\0'; i++)
;
for (x = 0; src[x] != '\0'; x++, i++)
dest[i] = src[x];
dest[i] = '\0';
return (dest);
}
