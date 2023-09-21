#include "lists.h"
/**
 * _strlen - a function to return length
 * @s: string
 * Return: int length
*/
int _strlen(char *s)
{
int counter;

if (s == NULL)
return (0);
for (counter = 0; *s++; counter++)
;
return (counter);
}

/**
 * print_list - a function to print a linked list
 * @h: the head pointer
 * Return: counter of size of list
*/
size_t print_list(const list_t *h)
{
size_t counter;

for (counter = 0; h; counter++)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (counter);
}
