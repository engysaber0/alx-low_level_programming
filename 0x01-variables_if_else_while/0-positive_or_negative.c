#include<stdio.h>
#include <stdlib.h>
/**
 * Entry - main point
 * Description: this code to identify if the num is pos or neg or egual zero.
 *
 * main - to identify if the num is pos or neg or egual zero
 * return: Always 0 (SUCCESS)
*/
int main(void)
{
int n;
scanf("%d", &n);
if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
printf("%d is negative\n", n);
return (0);
}
