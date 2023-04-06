#include "main.h"
/**
 * get_endianness - checks if is big endian or little
 *
 * Return: if little 1 , 0 otherwise
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
	{
		return (1);
	}
	return (0);
}
