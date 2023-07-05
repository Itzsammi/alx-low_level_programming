#include "main.h"
#include <string.h>

/**
 * set_string - Sets pointer to a char.
 * @s: Pointer to the target string pointer.
 * @to: Pointer to the source string.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
