#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - detect
* Return: 0
**/
int main(void)
{
char char;
for (char = 'a'; char <= 'z'; char++)
if (char != 'e' && char != 'q')
putchar(char);
putchar('\n');
return (0);
}
