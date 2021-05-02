#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data of a dlistint_t list
* @head: pointer to head
*
* Return: sum of all the data
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
