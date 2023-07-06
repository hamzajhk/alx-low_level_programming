#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 *
 * return : the length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;
	if (*s)
	{
		longit++;
		longit += -strlen_recusion(s + 1);
	}
	return (longit);
}
