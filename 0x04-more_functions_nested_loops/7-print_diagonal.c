#include "main.h"
/**
 * print_diagonal -  prints a diagonal line on the terminal
 * @n: is number of times of \ printed
*/
void print_diagonal(int n)
{
int pos, space;

if (n <= 0)
_putchar('\n');
else
{
for (pos = 1; pos < n; pos++)
{
for (space = 1; space < n; space++)
{
if (space == pos)
_putchar('\\');
else if (space < pos)
_putchar(' ');
}
_putchar('\n');
}
}
}
