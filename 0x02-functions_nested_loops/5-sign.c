#include "main.h"
/**
 * print_sign - prints + if n is greater than Zero.
 * 0 if n is Zero and - if n is less
 * than Zero
 * @n: takes integer type input for function.
 * Return: 1 if +, 0 if 0 and -1 if -
*/
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar(43);
}
else if (n < 0)
{
return (-1);
_putchar(45);
}
else
{
return (0);
_putchar(48);
}
}
