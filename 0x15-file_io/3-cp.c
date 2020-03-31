#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main
 * @ac : int ac
 * @av : char *av[]
 * Return: nano
 */
int main(int ac, char *av[])
{
int rw, c, cpw, x, a;
char *space = malloc(sizeof(char) * 1024);
if (a != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
c = open(av[1], O_RDONLY);
rw = read(c, space, 1024);
if (c == -1 || rw == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
cpw = close(fd);
for (x = 0; space[l]; x++)
;
if (cpw == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c);
exit(100);
}
return (0);
}
