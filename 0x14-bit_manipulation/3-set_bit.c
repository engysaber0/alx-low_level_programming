#include "main.h"
/**
* set_bit - Sets the value of a bit to 1 at a given index.
* @n: Pointer to the decimal number to modify.
* @index: The position that we will check
* Return: 1 else -1 if issue
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
/* 1UL is to check is unsigned int is equal 0 & | to */
/* check or (0,1) if 0 invert to 1 else 1 */
*n |= (1UL << index);
return (1);
}
