#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - cap_string
 * @a : char *a
 * Return: str
 */
char *cap_string(char *a)
{
int word = 1;
char *pra;
for (pra = a; *pra; pra++)
{
if (word == 1)
{
word = 0;
if (*pra < 'z' && *pra > 'a')
*pra -= 32;
}
if
(
*pra == ' '
|| *pra == '\n'
|| *pra == '\t'
|| *pra == ','
|| *pra == ';'
|| *pra == '.'
|| *pra == '!'
|| *pra == '"'
|| *pra == '('
|| *pra == ')'
|| *pra == '{'
|| *pra == '}'
)
word = 1;
pra++;
}
return (a);
}
