#include "main.h"

/**
 * main - writ function that swap value of two integres
 *
 * Return : 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
