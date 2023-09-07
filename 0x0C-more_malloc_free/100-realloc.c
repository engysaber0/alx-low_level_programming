#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory
 * @old_size: s of allocated memory ptr
 * @new_size: new size
 * Return: pointer to new memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p1;
char *old_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
p1 = malloc(new_size);
if (!p1)
return (NULL);
old_ptr = ptr;
if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
p1[i] = old_ptr[i];
}
free(ptr);
return (p1);
}
