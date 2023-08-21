#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: input
 * Return: print
*/
void puts2(char *str)
{
int l = 0;
int t = 0;
int o;
char *f = str;

while (*f != '\0')
{
f++;
l++;
}
t = l - 1;
for (o = 0; o <= t; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}
