#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * check_num - check - string
 * @str: array
 * Return: 0
*/
int check_num(char *str)
{
unsigned int c;

c = 0;
while (c < strlen(str))
{
if (!isdigit(str[c]))
{
return (0);
}
c++;
}
return (1);
}
/**
 * main - print name
 * @argc: count
 * @argv: arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
int c;
int str_to_int;
int sum = 0;

c = 1;
while (c < argc)
{
if (check_num(argv[c]))
{
str_to_int = atoi(argv[c]);
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
c++;
}
printf("%d\n", sum);
return (0);
}
