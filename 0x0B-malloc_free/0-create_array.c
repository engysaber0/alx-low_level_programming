#include "main.h"
/**
 * *create_array -  creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to array initialized or NULL
*/
char *create_array(unsigned int size, char c)
{
char *num = malloc(size);

if (size == 0 || num == 0)
return (0);
while (size--)
num[size] = c;
return (num);
}
