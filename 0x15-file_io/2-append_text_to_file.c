#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int o_write, i = 0;

if (!filename)
return (-1);

if (text_content)
{
for ( ; text_content[i];)
i++;
}

fd = open(filename, O_WRONLY | O_APPEND);
o_write = write(fd, text_content, i);

if (fd == -1 || o_write == -1)
return (-1);
close(fd);
return (1);
}
