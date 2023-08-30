#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to a string
 * Return: integer
*/
int _strlen_recursion(char *s)
{
int ptr = 0;

if (*s > '\0')
{
ptr = ptr + _strlen_recursion(s + 1) + 1;
}
return (ptr);
}
