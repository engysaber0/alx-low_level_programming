#include "main.h"
/**
 * main - prints numbers 1 - 100
 * numbers are multiples of 3 print Fizz
 *  numbers are multiples of 5 print Buzz
 *   numbers are multiples of 3 and 5 prints FizzBuzz
 *   Return: Always 0 (Success)
*/
int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && !(n % 5 == 0))
printf("Fizz");
else if (n % 5 == 0 && !(n % 3 == 0))
printf("Buzz");
else if (n % 5 == 0 && n % 3 == 0)
printf("FizzBuzz");
else
printf("%d", n);
if (n != 100)
printf(" ");
else
printf("\n");
}
return (0);
}
