#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
int fd; 
int o_write, i;

if (!filename)
return (-1);

if (text_content)
{
for (i = 0; text_content[i]; i++)
;
}

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
o_write = write(fd, text_content, i);

if (fd == -1 || o_write == -1)
return (-1);
close(fd);
return (1);
}
