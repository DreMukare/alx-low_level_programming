#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked dlistint_t list
* @h: pointer to head of list
*
* Return: number of elements in linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
