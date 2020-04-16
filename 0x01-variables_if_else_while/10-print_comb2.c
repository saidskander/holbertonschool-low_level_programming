#include <stdio.h>
/**
 * main - main
 * Return: 0 on success
 */
int main(void)
{
int x = '0';
int j = '0';
for (; x <= '9'; x++)
{
for (j = '0'; j <= '9'; j++)
{
putchar(x);
putchar(j);
if (j == '9' && x == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
if (j >= '9')
{
j = '0';
}
}
return (0);
}
