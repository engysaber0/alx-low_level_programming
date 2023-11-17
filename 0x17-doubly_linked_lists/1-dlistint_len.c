#include "lists.h"
/**
 * dlistint_len - return number of elements in double linked list
 * @h: head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

if (h == NULL)
return (count);

while (h->prev)
h = h->prev;

while (h)
{
count++;
h = h->next;
}

return (count);
}
