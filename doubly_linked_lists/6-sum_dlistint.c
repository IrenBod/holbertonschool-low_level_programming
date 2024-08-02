#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all data (n) in a doubly linked list.
 * @head: Pointer to the first node of the list.
 * Iterates through the list and sums up all the n values.
 * Returns 0 if the list is empty.
 * Return: Sum of all n values in the list, or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
