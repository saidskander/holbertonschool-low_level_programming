#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - append_text_to_file
 * @filename : const char *filename
 * @text_content : char *text_content
 * Return: nano
 */
int append_text_to_file(const char *filename, char *text_content)
{
int c, wt;
int x = 0;
if (filename == NULL)
return (-1);
c = open(filename, O_APPEND | O_WRONLY);
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
