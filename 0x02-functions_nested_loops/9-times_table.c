#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0.
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
*/
void times_table(void)
{
int p, m, num;

for (num = 0; num <= 9; num++)
{
_putchar(48);
for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
p = num * m;
if (p <= 9)
_putchar(' ');
else
_putchar((p / 10) + 48);
_putchar((p % 10) + 48);
}
_putchar('\n');
}
}
