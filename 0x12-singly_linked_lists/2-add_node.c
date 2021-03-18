#include "lists.h"

/**
* _strlen - returns the length of a string
* @str: pointer to string
*
* Return: length of string
*/
int _strlen(const char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
		len++;

	return (len);
}

/**
* add_node - adds new node to beginning of a list_t list
* @head: pointer to pointer to current head of list
* @str: string to be duplicated then put in new node
*
* Return: pointer to new node or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(struct list_s));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	*head = new_node;

	return (*head);
}
