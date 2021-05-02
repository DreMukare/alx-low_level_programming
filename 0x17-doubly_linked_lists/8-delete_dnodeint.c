#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at nth position
* @head: pointer to pointer to head
* @index: position
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
  dlistint_t *current = *head, *temp;
  unsigned int count = 0;
  
  if (*head == NULL || len < index)
    return (-1);
  if (index == 0)
    *head = (*head)->next;
  else
  {
    while (count < (index - 1))
    {
      if (current == NULL)
        return (-1);
      current = current->next;
      count++;
    }
    temp = current;
    current = current->next;
    temp->next = current == NULL ? NULL : current->next;
  }
  free(current);
  return (1);
}
