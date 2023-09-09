#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory needed
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ad;

	ad = malloc(b);
	if (ad == NULL)
		exit(98);
	return (ad);
}
