#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list.
 * @h: Pointer to the head of the list.
 * Description:
 * This function traverses a doubly linked list starting from the
 * head node and counts the total number of nodes in the list.
 * It returns this count as the function result.
 * Return: The number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t counter = 0;

	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
