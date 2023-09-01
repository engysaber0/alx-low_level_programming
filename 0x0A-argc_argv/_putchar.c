#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes c to stdout
 * @c: character
 * Return: 0
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
