#include <stdlib.h>
#include "main.h"
/**
 * wrdcnt - counts num of words
 * @s: string to count
 * Return: int of num of words
*/
int wrdcnt(char *s)
{
int f, c, w;
f = 0;
w = 0;

for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
f = 0;
else if (f == 0)
{
f = 1;
w++;
}
}
return (w);
}
/**
 * **strtow - splits a string into words.
 * @str: string to split
 * Return: pointer to array of strings
*/
char **strtow(char *str)
{
int i, j, k, l, n = 0, wc = 0;
char **w;

if (str == NULL || *str == '\0')
return (NULL);
n = wrdcnt(str);
if (n == 1)
return (NULL);
w = (char **)malloc(n *sizeof(char *));
if (w == NULL)
return (NULL);
w[n - 1] = NULL;
i = 0;
while (str[i])
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
;
j++;
w[wc] = (char *)malloc(j *sizeof(char));
j--;
if (w[wc] == NULL)
{
for (k = 0; k < wc; k++)
free(w[k]);
free(w[n - 1]);
free(w);
return (NULL);
}
for (l = 0; l < j; l++)
w[wc][l] = str[i + 1];
w[wc][l] = '\0';
wc++;
i += j;
}
else
i++;
}
return (w);
}
