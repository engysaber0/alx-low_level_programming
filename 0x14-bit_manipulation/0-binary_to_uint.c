#include "main.h"
/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: binary num
 * Return: the converted number, 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i = 0;

if (!b)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}

for (i = 0; b[i]; i++)
{
result = result * 2 + (b[i] - '0');
}
return (result);
}
