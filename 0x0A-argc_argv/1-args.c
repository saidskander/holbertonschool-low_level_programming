#include <stdio.h>
/**
 * main - check th code for holberton-school student
 * @argv: input
 * @argc: input
 * Return: 0
 */
int main(int argc, char *argv[])
{
int x;
 for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
