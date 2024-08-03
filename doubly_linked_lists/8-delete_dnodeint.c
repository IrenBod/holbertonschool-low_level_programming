#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 *                            in a doubly linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node that should be deleted, starting from 0.
 *
 * Return: 1 if successful, or -1 if it failed.
 *
 * Description: This function traverses the list to locate the node at
 *              the given index and deletes it by adjusting the pointers
 *              of the adjacent nodes. The memory allocated for the node
 *              is freed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	if (*head == NULL || *head == NULL)
		return (-1);

	current = *head;
	count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
		if (current == NULL)
			return (-1);

		if (current->prev == NULL)
		{
			*head = current->next;
			if (*head != NULL)
				(*head)->prev = NULL;
		}
		else
		{
			current->prev->next = current->next;
		}
		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}
		free(current);
		return (1);
}
