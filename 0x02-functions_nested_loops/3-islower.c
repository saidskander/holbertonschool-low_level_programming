#include "holberton.h"
/**
* _islower - shows if alohabet.
* @c : variable input
*Return: 0 .
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
