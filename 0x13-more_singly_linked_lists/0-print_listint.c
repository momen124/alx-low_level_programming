#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_listint(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->int)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->int);
		h = h->next;
		i++;
	}

	return (i);
}
