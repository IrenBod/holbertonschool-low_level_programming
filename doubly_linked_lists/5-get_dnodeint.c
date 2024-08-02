#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the nth node of a doubly linked list.
 * @head: Pointer to the first node of the list.
 * @index: The index of the node to retrieve, starting from 0.
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int current_index = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (current != NULL)
	{
		if (current_index == index)
		{
			return (current);
		}
		current = current->next;
		current_index++;
	}
	return (NULL);
}
