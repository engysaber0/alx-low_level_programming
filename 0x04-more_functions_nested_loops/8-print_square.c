#include "main.h"
/**
 * print_square - prints a square
 *
 * @size:
 * is the size of square
 * Return: Always 0 (Success)
*/
void print_square(int size)
{
int rows, columns;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (rows = 1; rows <= size; rows++)
{
for (columns = 1; columns <= size; columns++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
