#include <stdio.h>

/**
 * main - main
 * Return: 0 on success
 */
int main(void)
{
int a, b;
int c, d;
for (b = '0'; b < 58; b++)
{
for (a = '0'; a < 58; a++)
{
c = a + 1;
d = b;
for (; d < 58; d++)
{
for (; c < 58; c++)
{
putchar(b);
putchar(a);
putchar(' ');
putchar(d);
putchar(c);
if (b != 57 || d != 57 || a != 56 || c != 57)
{
putchar(',');
putchar(' ');
}
}
c = 48;
}
}
}
putchar('\n');
return (0);
}
