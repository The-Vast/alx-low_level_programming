#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to be set
 * @to: where char value is set to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
