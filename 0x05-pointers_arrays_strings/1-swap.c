#include "main.h"
/**
 * swap_int -  swaps the values of two integers.
 * @a: first parameter
 * @b: second parameter
 * Return: Nothing
*/
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
