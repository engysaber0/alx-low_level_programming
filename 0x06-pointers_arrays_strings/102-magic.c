#include <stdio.h>
/**
 * main - prints a[2] = 98
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;
int *p;
int a[5];

a[2] = 1024;
p = &n;
/*
 * write code here...
 * Remember:
 * - You are not allowed to use the variable a
 * - You are not allowed to modify the variable p
 * - You can only write one statement
 * - You are not allowed to use ,
 * - You are not allowed to code anything else 
 * than the line of expected line of code at the expected line
 */
*(p + 5) = 98;
/*...80 that prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
