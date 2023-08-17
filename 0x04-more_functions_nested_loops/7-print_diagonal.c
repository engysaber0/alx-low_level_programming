#include "main.h"
/**
 * print_diagonal -  prints a diagonal line on the terminal
 * @n: is number of times of \ printed
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i == j)
_putchar('\\');
else if (i < j)
_putchar(' ');
}
_putchar('\n');
}
}
}
