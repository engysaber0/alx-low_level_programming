#include "main.h"
#include <stdio.h>
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: filename
 * @letters: num of letters it should read and print
 * Return: number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t READ_num;
ssize_t WRITE_num;
char *ch;

if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd != -1)
{
ch = malloc(letters);
if (!ch)
return (0);
READ_num = read(fd, ch, letters);
WRITE_num = write(STDOUT_FILENO, ch, READ_num);
close(fd);
free(ch);
return (WRITE_num);
}
return (0);
}
