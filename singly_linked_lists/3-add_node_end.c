#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to pointer to the head of the list
 * @str: string to add to the node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		return (*head = new);

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new;
	return (new);
}
