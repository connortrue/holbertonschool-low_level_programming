#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int len = 0;

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the values for the new node */
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	/* If the list is empty, set the head to point to the new node */
	if (*head == NULL)
		*head = new_node;
	else
	{
		/* Find the last node in the list */
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		/* Set the next pointer of the last node to point to the new node */
		temp->next = new_node;
	}

	return (new_node);
}
