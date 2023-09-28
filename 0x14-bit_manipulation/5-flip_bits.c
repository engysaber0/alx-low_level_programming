#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: number to be flipped
 * @m: number to flip n to
 * Return: no. of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int num;
unsigned int bits = 0;

/* XOR the two numbers (n and m)*/
/* The result will have set bits where the numbers are different*/
num = n ^ m;

/* Count the number of set bits (1s) in the result*/
while (num > 0)
{
/* Check if the least significant bit is set (1)*/
if (num & 1)
bits++;
/* Increment the count of set bits*/
/* Right-shift the result to examine the next bit*/
num >>= 1;
}

return (bits);
}
