#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1:first string
 * @s2: second string
 * Return: result of substitution
*/
int _strcmp(char *s1, char *s2)
{
int i, j;
int equal = 0;

for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
{
if (s1[i] != s2[j])
{
equal = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
else
return (equal);
}
}
