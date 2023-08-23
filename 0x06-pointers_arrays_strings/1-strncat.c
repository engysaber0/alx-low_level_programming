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
int i, j;
i = 0;

while (dest[i])
i++;
for (j = 1; j <= n && src[j] != '\0'; j++)
dest[i + j] = src[j];
dest[i] = '\0';
return (dest);
}
