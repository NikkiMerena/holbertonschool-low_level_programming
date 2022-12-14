/*
 * File: 0-print_listint.c
 * Auth: Nikki Alderman
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointier to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		nodes += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
