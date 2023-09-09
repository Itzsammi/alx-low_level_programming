#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int n_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n_size = nmemb * size;
	n = malloc(n_size);
	if (n == NULL)
		return (NULL);
	while (i < n_size)
	{
		n[i] = 0;
		i++;
	}
	return (n);
}
