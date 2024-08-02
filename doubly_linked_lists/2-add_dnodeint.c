#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the start
 * of a doubly linked list.
 * @head: Double pointer to the list's head.
 * @n: Integer value for the new node.
 * Allocates a new node with the given value
 * `n`, inserts it at the beginning
 * of the list, and updates the head pointer.
 * Returns the new node or NULL if
 * memory allocation fails.
 * Return: Pointer to the new node, or NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
