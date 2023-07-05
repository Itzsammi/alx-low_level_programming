#include "main.h"
#include <string.h>

/**
 * set_string - Sets pointer to a char.
 * @s: Pointer to the target string pointer.
 * @to: Pointer to the source string.
 */
void set_string(char **s, char *to)
{
	if (*s != NULL)
	{
		free(*s);
		*s = NULL;
	}

	*s = (char *)malloc((strlen(to) + 1) * sizeof(char));

	strcpy(*s, to);
}
