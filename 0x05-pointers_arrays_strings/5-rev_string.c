#include "main.h"
/**
 * rev_string - reverses a string
 * @s: sting parameter
 * Return: Nothing
*/
void rev_string(char *s)
{
char rev = s[0];
int c, i;

while (s[c] != '\0')
c++;
for (i = 0; i < c; i++)
{
c--;
rev = s[i];
s[i] = s[c];
s[c] = rev;
}
}
