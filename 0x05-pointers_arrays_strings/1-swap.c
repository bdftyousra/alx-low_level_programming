#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer parameters
 * @b: pointer parameters
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
