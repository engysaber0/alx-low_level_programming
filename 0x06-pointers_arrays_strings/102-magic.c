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
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
