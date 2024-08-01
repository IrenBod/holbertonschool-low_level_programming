#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: Integer value to be stored in the new node
 * Return: Address of the new element, or NULL if memory allocation fails
 * Description:
 * This function creates a new node with the given value and adds it to the end
 * of a doubly linked list. If the list is empty, the new node becomes the firs
 * element of the list. If memory allocation fails, the function returns NULL.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
