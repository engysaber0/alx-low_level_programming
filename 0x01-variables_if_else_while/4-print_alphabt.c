#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * main - prints the alphabet without q and e.
 * Return: Always 0 (Success)
*/
int main(void)
{
int k;

for (k = 97; k < 123; k++)
{
	if (k == 101 || k == 113)
		continue;
putchar(k);
}
putchar('\n');
return (0);
}
