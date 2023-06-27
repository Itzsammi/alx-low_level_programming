#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string in-place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	if (s == NULL)
		return;

	int k = 0;
	char *a = s;
	char *b = s;

	while (*b != '\0')
	{
		k++;
		b++;
	}
	b--;

	for (int i = 0; i < k / 2; i++)
	{
		char temp = *(a + i);
		*(a + i) = *(b - i);
		*(b - i) = temp;
	}
}
