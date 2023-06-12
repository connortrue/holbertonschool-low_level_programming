#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer to set
 * @to: pointer to the value to set
 *
 * Description: This function sets the value of a pointer to a char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
