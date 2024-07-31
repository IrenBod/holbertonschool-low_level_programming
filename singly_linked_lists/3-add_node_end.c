#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodeEnd = malloc(sizeof(list_t));
	if (nodeEnd == NULL)
	{
		return (NULL);
	}
	nodeEnd->str = strdup(str);
	if (nodeEnd->str == NULL)
	{
		free(nodeEnd);
		return (NULL);
	}
	nodeEnd->next = NULL;

	if (*head != NULL)
	{
		*head = *head->next;

	}
	if (*head == NULL)
	{
		*head = nodeEnd;	
	}
	return	(nodeEnd);
}
