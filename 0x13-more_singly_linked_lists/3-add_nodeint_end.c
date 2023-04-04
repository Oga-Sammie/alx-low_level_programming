#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end -	Adds a node at the end of a linked list
* @n:			integer contained in the node to be included
* @head:		Pointer to the 1st head pointer of the linked list
* Return:		Returns the number of nodes
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node; /* Last node to be inserted */
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	tmp = malloc(sizeof(listint_t));

	tmp = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
