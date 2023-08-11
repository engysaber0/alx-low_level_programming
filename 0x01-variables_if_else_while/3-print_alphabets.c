#include<stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"'
		int j;

	for (j = 0; j < 52; j++)
	{
		putchar(alpha[j]);
	}
	putchar('\n');
	return (0);
}

