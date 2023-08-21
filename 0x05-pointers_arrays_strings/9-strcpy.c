#include "main.h"
/**
 * char *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 * Return: string
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x;
while (*(src + 1) != '\0')
{
l++;
}
for (x = 0; x < l; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
