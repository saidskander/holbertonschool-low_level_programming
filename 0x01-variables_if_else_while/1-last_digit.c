#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - detect
 * Return: 0
 **/
int main(void)
{
int n, ldo;
srand(time(0));
n = rand() - RAND_MAX / 2;
ldo = n % 10;
if (ldo > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, ldo);
if (ldo == 0)
printf("Last digit of %d is %d and is 0\n", n, ldo);
else if (ldo < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldo);
return (0);
}
