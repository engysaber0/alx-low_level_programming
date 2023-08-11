#include<stdio.h>
#include <stdlib.h>
/**
 * Entry - main point
 * Description:this code do this
 * code to identify if the num is pos or neg or egual zero
 *
 * return: 0 (sucess)
*/
int main(void)
{
int n;
scanf("%d", &n);
if (n > 0)
printf(" is positive ");
if (n == 0)
printf(" is zero ");
if (n < 0)
printf(" is negative ");
return (0);
}
