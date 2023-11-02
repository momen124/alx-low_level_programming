#include "main.h"

/**
 * _calloc - allocates memory for an array of @mem elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @mem: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int mem, unsigned int size)
{
	char *a;
	unsigned int b;

	if (mem == 0 || size == 0)
		return (NULL);
	a = malloc(mem * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (mem * size); b++)
		a[b] = 0;
	return (a);
}
