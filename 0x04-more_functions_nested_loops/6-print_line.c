#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: is number of times the _ character
*/
void print_line(int n)
{
int num;

if (n <= 0)
_putchar('\n');
else
{
for (num = 1; num <= n; num++)
_putchar('_');
}
}
