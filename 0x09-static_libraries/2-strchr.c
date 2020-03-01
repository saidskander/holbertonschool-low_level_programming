#include "holberton.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string.
 * @s : input variable
 * @c : input variable
 * Return: .
 */
char *_strchr(char *s, char c)
{
int x;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] == c)
return (s + x);
}
if (s[x] == c)
return (s + x);
else
return ('\0');
}
