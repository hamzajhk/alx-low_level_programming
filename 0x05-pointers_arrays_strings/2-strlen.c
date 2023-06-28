#include "main.h"
/**
 * main - function that returns length of string
 *
 * Return : 0
 */

int _strlen(char *s);
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
