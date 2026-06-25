#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to pointer to the head of the list
 * @str: string to add to the node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;
	int i;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	len = 0;
	i = 0;

	while (str[i])
	{
		len++;
		i++;
	}

	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
