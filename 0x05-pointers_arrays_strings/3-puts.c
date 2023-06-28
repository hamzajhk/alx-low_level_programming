#include "main.h"
/**
 * main - prints a string, followed by a new line, to stdout
 * Returne = o
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

