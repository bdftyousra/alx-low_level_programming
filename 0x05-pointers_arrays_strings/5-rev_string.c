#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: parameter
 * Return: nothing
 */

void rev_string(char *s)
{
	int a = 0, c, b;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	for (c =  a - 1, b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
