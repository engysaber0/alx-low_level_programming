#include <stdio.h>
#include "main.h"
/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: 2d array of int
 * @size: size of square
*/
void print_diagsums(int *a, int size)
{
int i;
int s = 0;
int s2 = 0;

for (i = 0; i < size; i++)
{
s = s + a[i];
s2 = s2 + a[size - i - 1];
a = a + size;
}
printf("%d, ", s);
printf("%d\n", s2);
}
