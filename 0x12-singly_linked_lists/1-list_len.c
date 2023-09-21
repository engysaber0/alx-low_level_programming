#include "lists.h"
/**
 * list_len - a function to return length
 * @h: the head pointer
 * Return: length
*/
size_t list_len(const list_t *h)
{
size_t length;

for (length = 0; h; length++)
h = h->next;
return (length);
}
