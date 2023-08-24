#include <stdio.h>
#include "main.h"
/**
 * isLower - determine if lowercase
 * @c:char
 * Return: 1 if true, 0 is false.
*/
int isLower(char c)
{
return (c >= 97 && c <= 122);
}
int isDelimiter(char c)
{
int i;
char delimiter[] = " \t\n,.!?\"{}()";

for (i = 0; i < 12; i++)
if (c == delimiter[i])
return (1);
return (0);
}
char *cap_string(char *s)
{
int check = 1;
char *ptr = s;

while (*s)
{
if (isDelimiter(*s))
check = 1;
else if (isLower(*s) && check)
{
*s -= 32;
check = 0;
}
else
check = 0;
s++;
}
return (ptr);
}
