#include <stdio.h>
/**
 * main - main
 * Return:.
 */
int main(void)
{
unsigned long x = 0, i = 0, j = 1, a;
for (; x < 50; x++)
{
a = i + j;
i = j;
j = a;
printf("%lu", a);
if (x == '0')
putchar('\n');
else
{
printf(", ");
}
}
return (0);
}
