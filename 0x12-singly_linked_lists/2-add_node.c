#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - a function to add a new node in start
 * @head: address of pointer
 * @str: next field
 * Return: size
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *second_head;
unsigned int len = 0;

while (str[len])
len++;

second_head = malloc(sizeof(list_t));
if (!second_head)
return (NULL);

second_head->str = strdup(str);
second_head->len = len;
second_head->next = (*head);
(*head) = second_head;

return (*head);
}
