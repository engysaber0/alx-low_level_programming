#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min range of values
 * @max: max range of values
 * Return: pointer to new array
*/
int *array_range(int min, int max)
{
int *ptr;
int i, s;

if (min > max)
return (NULL);
s = max - min + 1;
ptr = malloc(sizeof(int) * s);
if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++)
ptr[i] = min++;
return (ptr);
}
