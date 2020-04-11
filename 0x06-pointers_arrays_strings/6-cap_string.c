#include "holberton.h"
/**
 * cap_string - *cap_string
 * @s: char *s string
 * Return: str
 */
char *cap_string(char *s)
{
int x = 0, j = 0;
int sizeac;
char asciichar[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
sizeac = sizeof(asciichar) / sizeof(asciichar[0]);
for (; s[x]; x++)
{
char c = s[x];
for (j = 0; j < sizeac; j++)
{
if (c == asciichar[j] && s[x + 1] >= 'a' && s[x + 1] <= 'z')
{
s[x + 1] = 'A' + (s[x + 1] - 'a');
break;
}
}
}
if (s[0] >= 'a' && s[0] <= 'z')
s[0] = 'A' + (s[0] - 'a');
return (s);
}
