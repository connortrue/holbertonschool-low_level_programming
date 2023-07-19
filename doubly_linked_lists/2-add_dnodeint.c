#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to head of list
 * @n: value of new node
 *
 * Return: address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* allocate memory for the new node */
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	/* set the node's data */
	new->n = n;

	/* set the node's previous and next pointers */
	new->prev = NULL;
	new->next = *head;

	/* if the list ain't empty, set the previous node's next pointer */
	/* to the new node */
	if (*head != NULL)
		(*head)->prev = new;

	/* update the head pointer to point to the new node */
	*head = new;

	/* return the address of the new node */
	return (new);
}
