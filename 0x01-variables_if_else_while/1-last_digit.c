#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/**
 * Entry - main point
 *
 * Description : The string Last digit of, followed by n
 * main - The string Last digit of, followed by n
 * if the last digit of n is greater than 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
 * Return : Always 0(SUCCESS)
*\
int main(void){
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n%10) > 5)
{
printf(" the last digit of %d is %d and is greater than 5\n", n, n%10);
}
else if ((n%10) < 6 && (n%10)!=0)
{
printf(" the last digit of %d is %d and is less than 6 and not 0\n", n, n%10);
}
else
{
printf(" the last digit of %d is %d and is 0\n", n, n%10);
}
return (0);
}
