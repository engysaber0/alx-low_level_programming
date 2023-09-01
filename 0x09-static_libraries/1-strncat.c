#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input destination
 * @src: input source
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int c, i;
c = 0;

while (dest[c])
c++;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i + c] = src[i];
dest[i + c] = '\0';
return (dest);
}
