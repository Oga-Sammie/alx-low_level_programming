#include "lists.h"

/**
* insert_nodeint_at_index -	Inserts node at specific position in linked lis
* @head:					Pointer to 1st node in linked list
* @idx:						Index position to insert new node
* @n:						Integer value contained in new node
* Return:					Returns a pointer to node at specific position in linked list
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *tmp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	tmp = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if ((tmp == NULL) || (tmp->next == NULL))
			return (NULL);
		tmp = tmp->next;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
