#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @str: string.
 * Return: string is encoded
*/
char *leet(char *str)
{
char *str2 = str;
char key[] = {'A', 'E', 'O', 'T', 'L'};
int val[] = {4, 3, 0, 7, 1};

while (*str)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
if (*str == key[i] || *str == key[i] + 32)
{
*str = 48 + val[i];
}
}
str++;
}
return (str2);
}
