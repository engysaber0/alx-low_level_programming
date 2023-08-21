#include "main.h"
/**
 * print_rev - t prints a string, in reverse
 * followed by a new line
 * @s: pointer to string to print
 * Return: Nothing
*/
void print_rev(char *s)
{
int c = 0;

while (s[c])
c++;
while (c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
