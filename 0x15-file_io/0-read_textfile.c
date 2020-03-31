#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "holberton.h"
#include <fcntl.h>
/**
*read_textfile - read_textfile
*@filename: const char *filename
*@letters: size_t letters
*Return: wt
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int rd;
int wt;
int x;
char *space;
if (filename == NULL)
return (0);
x = open(filename, O_RDONLY);
if (x == -1)
return (0);
space = malloc(sizeof(char) * letters);
if (space == NULL)
{
free(space);
return (0);
}
rd = read(x, space, letters);
if (rd == -1)
{
return (0);
}
wt = write(STDOUT_FILENO, space, rd);
if (wt == -1)
return (0);
close(x);
return (wt);
}
