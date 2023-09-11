#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - length of string
 * @str: string to get length
 * Return: length
*/
int _strlen(const char *str)
{
int l = 0;

while (*str++)
l++;
return (l);
}
/**
 * _strcopy - a funcction to return @dest
 * @src: string to copy
 * @dest: copt string to here
 * Return: @dest
*/
char *_strcopy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - Write a function that creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct pointer dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

if (!name || age < 0 || !owner)
	return (NULL);
dog = (dog_t *) malloc(sizeof(dog_t));

if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);
return (dog);
}
