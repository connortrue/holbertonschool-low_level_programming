#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked
 * list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp, *prev; /* pointers to the current and previous nodes */
    unsigned int i; /* loop counter */

    /* check if the linked list is empty */
    if (*head == NULL)
        return (-1);

    /* initialize the pointers */
    temp = *head;
    prev = NULL;

    /* check if the index is 0 */
    if (index == 0)
    {
        /* update the head pointer */
        *head = temp->next;

        /* free the current node */
        free(temp);

        return (1);
    }

    /* iterate through the linked list to find the node at index `index` */
    for (i = 0; temp != NULL && i < index; i++)
    {
        /* update the previous node pointer */
        prev = temp;

        /* update the current node pointer */
        temp = temp->next;
    }

    /* check if the node at index `index` was found */
    if (temp == NULL)
        return (-1);

    /* update the previous node's next pointer */
    prev->next = temp->next;

    /* free the current node */
    free(temp);

    return (1);
}
