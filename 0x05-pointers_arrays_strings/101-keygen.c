#include <time.h>
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: Always 0 (Success)
*/
int main (void)
{
int pass[100];
int i;
int sum = 0;
int n;

srand(time(NULL));
for (i = 0; i <= 100l; i++)
{
pass[i] = rand() % 78;
sum = sum + (pass[i] + '0');
putchar(pass[i] + '0');
if ((2772 - sum) - '0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
