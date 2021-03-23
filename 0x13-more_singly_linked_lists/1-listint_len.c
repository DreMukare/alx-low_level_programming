#include "lists.h"

/**
* listint_len - returns number of elements in linked list
* @h: pointer to head node
*
* Return: number of elements in linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
