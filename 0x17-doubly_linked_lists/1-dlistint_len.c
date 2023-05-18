#include "lists.h"

/**
  * dlistint_len - returns number of elements in a linked list
  *
  * @h: first node of linked list
  * Return: number of elements in the linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

