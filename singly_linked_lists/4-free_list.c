#include "lists.h"

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;

		if (current->str != NULL)
		{
			free(current->str);
		}
		free(current);
		current = next_node;
	}
}
