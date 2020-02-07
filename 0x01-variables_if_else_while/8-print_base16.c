#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - detect my code
 * Return: 0
 **/
int main(void)
{
int x;
char x1;
x = 0;
while (x <= 9)
{
putchar(x + '0');
x++;
}
x1 = 'a';
while (x1 <= 'f')
{
putchar(x1);
x++;
}
putchar('\n');
return (0);
}
