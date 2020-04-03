#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * cp - cp
 * @fd1 : int fd1
 * @fd2 : int fd2
 * @a1 : char *a1
 * @a2 : char *a2
 * return: void
 */
void cp(int fd1, int fd2, char *x1, char *x2)
{
int dl, rw;
char mybf[1024];
for (; (dl = read(fd1, mybf, 1024)) > 0;)
{
rw = write(fd2, mybf, dl);
if (rw == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", x2);
exit(99);
}
}

if (dl == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", x1);
exit(98);
}
}
/**
 * main - main
 * @ac : int ac
 * @x : char **av
 * Return: 0
 */
int main(int ac, char **x)
{
int fd1, fd2, cc, c1;
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd1 = open(x[1], O_RDONLY);
if (fd1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", x[1]);
exit(98);
}
fd2 = open(x[2], O_WRONLY | O_TRUNC | O_CREAT,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", x[2]);
exit(99);
}
cp(fd1, fd2, x[1], x[2]);
cc = close(fd1);
if (cc == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
exit(100);
}
c1 = close(fd2);
if (c1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
exit(100);
}
return (0);
}
