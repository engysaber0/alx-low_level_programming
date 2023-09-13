#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - send an array to a fun pointer
 * @array: array of int
 * @size: the size of the array
 * @action: is a pointer to the function you need to use
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *e = array + size - 1;

if (array && size && action)
while (array <= e)
action(*array++);
}
