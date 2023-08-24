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
/**
 * isDelimiter - determine if ascii a delimiter
 * @c:char
 * Return: 1 if true, 0 if false
*/
int isDelimiter(char c)
{
int i;
char delimiter[] = " \t\n,.!?\"{}()";

for (i = 0; i < 12; i++)
if (c == delimiter[i])
return (1);
return (0);
}
/**
 * cap_string -  capitalizes all words of a string.
 * @s: string
 * Return: string with cap words
*/
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
