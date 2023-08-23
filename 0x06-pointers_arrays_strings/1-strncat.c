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
int k, i;
k = 0;

while (dest[k])
k++;
for (k = 0; k < n && src[k] != '\0'; k++)
dest[i + k] = src[i];
dest[i + k] = '\0';
return (dest);
}
