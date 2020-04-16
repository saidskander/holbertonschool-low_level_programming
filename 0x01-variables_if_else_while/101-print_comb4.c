#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
int x;
int j;
int k;
for (x = '0'; x < 56; x++)
{
for (j = x + 1; j < 57; j++)
{
for (k = j + 1; k < 58; k++)
{
putchar(x);
putchar(j);
putchar(k);
if (x != 55 || j != 56 || k != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
