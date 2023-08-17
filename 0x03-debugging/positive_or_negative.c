#include "main.h"
/**
 * positive_or_negative - Determine if number is pos, neg or Zero
 * 0 : is the number to be checked
 * @i: input integer.
 * Return: 0 (Success)
*/
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is % s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
