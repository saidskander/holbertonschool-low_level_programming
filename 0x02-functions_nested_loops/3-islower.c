#include "holberton.h"
/**
* _islower - return 1 or 0.
* @c : variable input
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
