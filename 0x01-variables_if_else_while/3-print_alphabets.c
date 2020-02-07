#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - detect my code
 * Return: 0
 **/
int main(void)
{
char ch1;
ch1 = 'a';
while (ch1 <= 'z')
{
putchar (ch1);
ch1 = ch1 + 1;
}
ch1 = 'A';
while (ch1 <= 'Z')
{
putchar (ch1);
ch1 = ch1 + 1;
}
putchar ('\n');
return (0);
}
