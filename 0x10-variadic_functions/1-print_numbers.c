#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - function to print numbers
 * @n: num of args
 * @separator: resepresents the seperator
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int i;

va_start(nums, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(nums, unsigned int));
if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}
va_end(nums);
printf("\n");
}
