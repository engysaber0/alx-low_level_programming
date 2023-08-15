#include "main.h"
/**
 * numLength - returns the lengthof string.
 * @num: operand number
 * Return: num of digits
*/
int numLength(int n)
{
int l = 0;

if (!n)
return (1);
while (n)
{
n = n / 10;
l = l + 1;
}
return (l);
}
/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * followed by a new line.
 * Return: Always 0 (Success)
*/
int main(void)
{
int c, i;
unsigned long f1 = 1, f2 = 2, sum, max = 00000000, f1o = 0, f20 = 0, sum0 = 0;

for (c = 1; c <= 98; c++)
{
if (flo > 0)
printf("%lu", f1o);
i = numLength(max) - 1 - numLength(f1);
while (f10 > 0 && i > 0)
{
printf("%d", 0);
i--;
}
printf("%lu", f1);
sum = (f1 + f2) % max;
sumo = flo + f2o + (f1 + f2) / max;
f1 = f2;
flo = f2o;
f2 = sum;
f2o = sumo;
if (c != 98)
printf(", ");
else
printf("\n");
}
return (0);
}
