#include "lists.h"

/**
* sum_listint -	Sums all data values in linked list
* @head:		Pointer to 1st node in linked list
* Return:		Sum of values in the linked list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
