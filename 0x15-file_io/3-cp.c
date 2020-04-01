#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * main - main
 * @ac : int ac
 * @av : char *av[]
 * Return: RETURN
 */
int main(int ac, char *av[])
{
int rw,oR;
int c, x;
int oRD, ww, ct;
char *space;
space = malloc(sizeof(char) * 1024);
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
oR = open(av[1], O_RDONLY);
rw = read(oR, space, 1024);
if (oR == -1 || rw == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
c = close(oR);
for (; space[x]; x++)
;
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", oR);
exit(100);
}
oRD = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
ww = write(oRD, space, x);
if (oRD == -1 || ww == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
}
ct = close(oRD);
if (ct == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", oRD);
exit(100);
}
free(space);
return (0);
}
