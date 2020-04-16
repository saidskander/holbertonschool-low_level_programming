#include <stdio.h>
/**
 * main - main
 * Return: 0 on success
*/
int main(void)
{
int x;
long int Cureent, two, one;
one = 1;
two = 1;
current = 2;
printf("%lu", two);
printf(", %lu", current);
for (x = 2; x < 50; x++)
{
two = one;
one = current;
current = two + one;
printf(", %ld", current);
}
printf("\n");
return (0);
}
