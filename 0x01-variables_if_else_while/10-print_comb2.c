#include <stdio.h>
/**
* main - detect my code
* Return: 0
**/
int main(void)
{
int x;
for (x + '0'; x <= 99; x++)
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
}
if (x < 99)
{
putchar(',');
putchar(' ');
x++;
}
putchar('\n');
return (0);
}
