#include "main.h"
/**
 * print_binary - prints the binary representation of num
 * @n: unsigned long, num to represent in binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
int numBits = sizeof(n) * 8; /*Number of bits in 'n'*/
int isPrinted = 0; /* Flag to check if anything has been printed*/

while (numBits)
{
if (n & 1L << --numBits)
{
_putchar('1'); /* Print '1' if the bit is set*/
isPrinted++; /* Update the printed flag*/
}
else if (isPrinted)
{
/* Print '0' if the bit is not set and something has been printed before*/
_putchar('0');
}
}

if (!isPrinted)
{
/* Print '0' if nothing has been printed*/
_putchar('0');
}
}
