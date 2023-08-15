#include "main.h"
/**
 * _isalpha - checks if the character is a upper or lower letter.
 * @c: takes input from other functions.
 * Return: 1 if c is a letter, lowercase or uppercase
 * else 0
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
