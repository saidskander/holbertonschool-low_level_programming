#include "holberton.h"
/**
 * *_strncat - check the code for Holberton School students.
 * @dest : input
 * @src : input
 * @n : input
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
;
 for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
 i++;
 }
return (dest);
}

