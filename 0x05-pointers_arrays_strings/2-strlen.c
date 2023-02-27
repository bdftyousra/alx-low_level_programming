#include "main.h"

/**
 * _strlen - string length counter
 * @s: parameter
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	for ( ; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}

