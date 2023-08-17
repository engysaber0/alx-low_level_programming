#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
int n;

while (n >= 0 && n <= 9)
{
_putchar(n + 48);
n++;
}
_putchar('\n');
}
