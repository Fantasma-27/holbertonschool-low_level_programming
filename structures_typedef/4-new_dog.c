#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc((_strlen(name) + 1) * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);
	return (dog);
}
