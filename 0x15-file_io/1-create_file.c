#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - create_file
 * @filename : const char *filename
 * @text_content : char *text_content
 * Return: nani 
 */
int create_file(const char *filename, char *text_content)
{
int c, wt;
int x = 0;
if (filename == NULL)
return (-1);
c = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 00600);
if (c == -1)
return (-1);
if (text_content != NULL)
{
for (; text_content[x]; x++)
;
wt = write(c, text_content, x);
if (wt == -1)
return (-1);
}
close(c);
return (1);
}
