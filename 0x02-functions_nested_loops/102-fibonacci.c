#include <stdio.h>
/**
 * main - main
 * Return: 0 on success
*/
int main(void)
{
int x;
long int Current, two, one;
one = 1;
two = 1;
Current = 2;
printf("%lu", two);
printf(", %lu", Current);
for (x = 2; x < 50; x++)
{
two = one;
one = Current;
Current = two + one;
printf(", %ld", Current);
}
printf("\n");
return (0);
}
