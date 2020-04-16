#include <stdio.h>
/**
 * main - main
 * Return: 0 on success
 */
int main(void)
{
int x = '0';
int j;
for (; x <= '9'; x++)
{
for (j = '0'; j <= '9'; j++)
{
if (!(x > j || x == j))
{
putchar(x);
putchar(j);
if (x == '8' && j == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
j = '0';
}
return (0);
}
