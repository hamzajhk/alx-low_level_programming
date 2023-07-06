#include "main.h"
/**
 * _print_rev_recursion - prints a string in revers.
 * @s : the string to be printed.
 */
void _print_rev_recursion(char *)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
