#include "lists.h"
#include <stdlib.h>

/**
* pop_listint -	Deletes the head node of a linked list
* @head: Double pointer to the list
* Return: Returns value in deleted node
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int del_v;

	tmp = *head;
	if (head == NULL || *head == NULL)
		return (0);

	*head = tmp->next;
	del_v = tmp->n;
	free(tmp);
	return (del_v);
}
