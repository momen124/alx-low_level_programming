#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
    size_t nodes = 0;

    while (h)
    {
        printf("[%lu] %s\n", h->len, h->str ? h->str : "(nil)");
        h = h->next;
        nodes++;
    }

    return nodes;
}
