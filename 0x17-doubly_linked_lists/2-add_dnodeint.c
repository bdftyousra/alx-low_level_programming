#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a linked list
  *
  * @head: double pointer to head of linked list
  * @n: integer value for new node
  * Return: address of new element or NULL for failure
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	tmp = *head;
	new_node->next = tmp;
	*head = new_node;
	if (tmp)
		tmp->prev = *head;

	return (new_node);
}
