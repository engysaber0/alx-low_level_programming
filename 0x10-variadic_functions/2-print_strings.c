#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - Prints strings
 * @separator: printed string among  strings.
 * @n: num of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list s;
char *ptr;
unsigned int i;

va_start(s, n);

for (i = 0; i < n; i++)
{
ptr = va_arg(s, char *);

if (ptr == NULL)
printf("(nil)");
else
printf("%s", ptr);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(s);
}
