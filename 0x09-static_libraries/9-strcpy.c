#include "holberton.h"
/**
 * *_strcpy - check the code for Holberton School students.
 * @dest : input
 * @src : input
 * Return: return dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;
int j;
for (i = 0; src[i] != '\0'; i++)
;
for (j = 0; j <= i; j++)
{
dest[j] = src[j];
}
return (dest);
}
